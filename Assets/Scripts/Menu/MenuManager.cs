using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
#if UNITY_ADS
using UnityEngine.Advertisements;
using System;
#endif
#if UNITY_PURCHASING
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Security;
#endif


/// <summary>
/// Manages the menu and its UI. 
/// </summary>
public class MenuManager : MonoBehaviour
#if UNITY_PURCHASING
, IStoreListener
#endif
{

    [Header("Main")]
    public GameObject main;
    public Button play;
    public Button highScores;
    public Button credits;
    public Button sound;
    public Button music;
    public Button ads;
    public Button restore;

    [Header("HighScores")]
    public GameObject scores;
    public Button menu;
    public TextMeshProUGUI score;

    [Header("Credits")]
    public GameObject creditsPage;
    public Button menu2;

    private GameObject musicOn;
    private GameObject musicOff;
    private GameObject soundOn;
    private GameObject soundOff;

#if UNITY_PURCHASING
    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.

    private static string disableAdsProductID = "1807728";

    /// <summary>
    /// Update the static buttons per instance to allow purchasing instance to disable them. 
    /// </summary>
    private static Button[] disableable = new Button[2];
#endif

    // Use this for initialization
    void Start()
    {
        bool showAd = !Utils.Loaded;
        if (!Utils.Loaded)
        {
#if UNITY_PURCHASING
            // If we haven't set up the Unity Purchasing reference
            if (m_StoreController == null)
            {
                // Begin to configure our connection to Purchasing
                InitializePurchasing();
            }
#endif
            Utils.Reset();
            Utils.Load();
        }

        StartCoroutine(Initialize(showAd));
    }

    private IEnumerator Initialize(bool showAd)
    {
        musicOn = music.transform.GetChild(1).gameObject;
        musicOff = music.transform.GetChild(2).gameObject;
        soundOn = sound.transform.GetChild(1).gameObject;
        soundOff = sound.transform.GetChild(2).gameObject;

        musicOn.SetActive(Utils.Music >= 0);
        musicOff.SetActive(Utils.Music < 0);
        soundOn.SetActive(Utils.Soundfx >= 0);
        soundOff.SetActive(Utils.Soundfx < 0);

        score.text = Utils.HighScore.ToString();
        play.onClick.AddListener(LoadGame);
        highScores.onClick.AddListener(delegate { AlternateScreens(scores); });
        credits.onClick.AddListener(delegate { AlternateScreens(creditsPage); });
        sound.onClick.AddListener(ToggleSound);
        music.onClick.AddListener(ToggleMusic);
        menu.onClick.AddListener(delegate { AlternateScreens(scores); });
        menu2.onClick.AddListener(delegate { AlternateScreens(creditsPage); });
#if UNITY_PURCHASING
        disableable = new Button[] { ads, restore };
        ads.onClick.AddListener(DisableAds);
#if UNITY_IOS
        restore.onClick.AddListener(RestorePurchases);
#endif
#endif

#if UNITY_ADS && UNITY_PURCHASING
        float time = 0;
        while (!IsInitialized() && time < 2.5f)
        {
            time += 0.1f;
            yield return new WaitForSecondsRealtime(0.1f);
        }

        bool invalid = IsInitialized() && !ValidifyPurchase();

        if (showAd && invalid)
        {
            while (!Advertisement.IsReady() && time < 2.5f)
            {
                time += 0.1f;
                yield return new WaitForSecondsRealtime(0.1f);
            }
            if (Advertisement.IsReady())
            {
                Advertisement.Show();
                yield return new WaitForSecondsRealtime(2f);
                while (Advertisement.isShowing)
                {
                    yield return new WaitForSecondsRealtime(0.1f);
                }
                yield return new WaitForSecondsRealtime(0.2f);
            }
        }
#endif
        SoundManager.SongEvent();
        ColorChanger.colorEvent();
        GetComponent<FadeableUI>().SelfFadeIn();
        yield break;
    }

    private void LoadGame()
    {
        SceneManager.LoadScene("Game");
    }

    private void AlternateScreens(GameObject g)
    {
        main.SetActive(!main.activeSelf);
        g.SetActive(!g.activeSelf);
    }

    private void ToggleSound()
    {
        bool active = soundOn.activeInHierarchy;
        soundOn.SetActive(!active);
        soundOff.SetActive(active);

        SoundManager.MixerToggle(active, "SoundFX");
    }

    private void ToggleMusic()
    {
        bool active = musicOn.activeInHierarchy;
        musicOn.SetActive(!active);
        musicOff.SetActive(active);

        SoundManager.MixerToggle(active, "Music");
    }

#if UNITY_PURCHASING
    private void DisableAds()
    {
        // Buy the non-consumable product using its general identifier. Expect a response either 
        // through ProcessPurchase or OnPurchaseFailed asynchronously.
        BuyProductID(disableAdsProductID);
    }

    public void InitializePurchasing()
    {
        // If we have already connected to Purchasing ...
        if (IsInitialized())
        {
            // ... we are done here.
            return;
        }

        // Create a builder, first passing in a suite of Unity provided stores.
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        // Continue adding the non-consumable product.
        builder.AddProduct(disableAdsProductID, ProductType.NonConsumable);

        // Kick off the remainder of the set-up with an asynchrounous call, passing the configuration 
        // and this class' instance. Expect a response either in OnInitialized or OnInitializeFailed.
        UnityPurchasing.Initialize(this, builder);
    }

    private bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }

    void BuyProductID(string productId)
    {
        // If Purchasing has been initialized ...
        if (IsInitialized())
        {
            // ... look up the Product reference with the general product identifier and the Purchasing 
            // system's products collection.
            Product product = m_StoreController.products.WithID(productId);

            // If the look up found a product for this device's store and that product is ready to be sold ... 
            if (product != null && product.availableToPurchase)
            {
                Debug.Log(string.Format("Purchasing product asychronously: '{0}'", product.definition.id));
                // ... buy the product. Expect a response either through ProcessPurchase or OnPurchaseFailed 
                // asynchronously.
                m_StoreController.InitiatePurchase(product);
            }
            // Otherwise ...
            else
            {
                // ... report the product look-up failure situation  
                Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
            }
        }
        // Otherwise ...
        else
        {
            // ... report the fact Purchasing has not succeeded initializing yet. Consider waiting longer or 
            // retrying initiailization.
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }


    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");

        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        // Or ... a non-consumable product has been purchased by this user.
        if (String.Equals(args.purchasedProduct.definition.id, disableAdsProductID, StringComparison.Ordinal))
        {
            Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
            // The non-consumable item has been successfully purchased, grant this item to the player.
            disableable[0].gameObject.SetActive(false);
            disableable[1].gameObject.SetActive(false);
        }
        // Or ... an unknown product has been purchased by this user. Fill in additional products here....
        else
        {
            Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        }

        // Return a flag indicating whether this product has completely been received, or if the application needs 
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still 
        // saving purchased products to the cloud, and when that save is delayed. 
        return PurchaseProcessingResult.Complete;
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing 
        // this reason with the user to guide their troubleshooting actions.
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }

    private bool ValidifyPurchase()
    {
        bool validPurchase = true; // Presume valid for platforms with no R.V.

        // Unity IAP's validation logic is only included on these platforms.
#if UNITY_ANDROID || UNITY_IOS
        // Prepare the validator with the secrets we prepared in the Editor
        // obfuscation window.

        var validator = new CrossPlatformValidator(GooglePlayTangle.Data(),
            AppleTangle.Data(), Application.identifier);

        try
        {
            Product product = m_StoreController.products.WithID(disableAdsProductID);
            // On Google Play, result has a single product ID.
            // On Apple stores, receipts contain multiple products.
            var result = validator.Validate(product.receipt);
            // For informational purposes, we list the receipt(s)
            Debug.Log("Receipt is valid. Contents:");
            foreach (IPurchaseReceipt productReceipt in result)
            {
                Debug.Log(productReceipt.productID);
                Debug.Log(productReceipt.purchaseDate);
                Debug.Log(productReceipt.transactionID);
            }
        }
        catch (IAPSecurityException)
        {
            Debug.Log("Invalid receipt, not unlocking content");
            validPurchase = false;
        }
#endif

        disableable[0].gameObject.SetActive(!validPurchase);
#if UNITY_IOS
        disableable[1].gameObject.SetActive(!validPurchase);
#endif

        return validPurchase;
    }

#if UNITY_IOS

    /// <summary>
    /// Restores purchases for apple IOS store
    /// </summary>
    public void RestorePurchases()
    {
        m_StoreExtensionProvider.GetExtension<IAppleExtensions>().RestoreTransactions(result => {
            if (result)
            {
                Debug.Log("Restore Succeeded");
                ValidifyPurchase();
                restore.gameObject.SetActive(false);
            }
            else
            {
                Debug.Log("Restore Failed");
            }
        });
    }

#endif

#endif
}
