#if UNITY_ANDROID || UNITY_IPHONE || UNITY_STANDALONE_OSX || UNITY_TVOS
// WARNING: Do not modify! Generated file.

namespace UnityEngine.Purchasing.Security {
    public class GooglePlayTangle
    {
        private static byte[] data = System.Convert.FromBase64String("ipzhcKi7QAoMpatbk3mJvCZAumhr6Obp2Wvo4+tr6Ojpf7+AN8i793Fch1eABUe8h1sPdRA970O9mRHR2Wvoy9nk7+DDb6FvHuTo6Ojs6epuLaXXtfCxMkgYcfYPgwth/YxlGcXyTotfdPEODk9hXQgFHiHqhUUHjbP41ic8WpeIvFsCe5N7ckKjISIvQmIi+TMb4KnPYkQ1R4xjljQzVWaYf3ZG0jyTzHjwo9q0t4a3ipY20+6xEvkq+XJ+QDUhIGal9u5AXZOLYOJ+NC8uc8H7RmnwqBdrkzPwDh/dJAxOFtv3AUC2aeEcuZ9F5tOKTOG+Qs+hXsp6eqrhGcGaNEP6hCMjd8GApWmnNt7RpW8ne22lNbtVddXnBHtzZnqVxOvq6Ono");
        private static int[] order = new int[] { 12,1,4,12,7,11,6,12,8,10,11,13,12,13,14 };
        private static int key = 233;

        public static readonly bool IsPopulated = true;

        public static byte[] Data() {
        	if (IsPopulated == false)
        		return null;
            return Obfuscator.DeObfuscate(data, order, key);
        }
    }
}
#endif
