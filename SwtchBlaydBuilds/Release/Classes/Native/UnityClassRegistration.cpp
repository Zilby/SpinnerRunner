extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; 
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; template <> void RegisterUnityClass<CGProgram>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectAsset; 
class VisualEffectResource; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 86 non stripped classes
	//0. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//3. Camera
	RegisterUnityClass<Camera>("Core");
	//4. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//5. Texture
	RegisterUnityClass<Texture>("Core");
	//6. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//7. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//8. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//9. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//10. GameObject
	RegisterUnityClass<GameObject>("Core");
	//11. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//12. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//13. GameManager
	RegisterUnityClass<GameManager>("Core");
	//14. Renderer
	RegisterUnityClass<Renderer>("Core");
	//15. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//16. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//17. Shader
	RegisterUnityClass<Shader>("Core");
	//18. Material
	RegisterUnityClass<Material>("Core");
	//19. Light
	RegisterUnityClass<Light>("Core");
	//20. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//21. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//22. Mesh
	RegisterUnityClass<Mesh>("Core");
	//23. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//24. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//25. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//26. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//27. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//28. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//29. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//30. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//31. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//32. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//33. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//34. Transform
	RegisterUnityClass<Transform>("Core");
	//35. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//36. Sprite
	RegisterUnityClass<Sprite>("Core");
	//37. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//38. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//39. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//40. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//41. Collider
	RegisterUnityClass<Collider>("Physics");
	//42. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//43. Animator
	RegisterUnityClass<Animator>("Animation");
	//44. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//45. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//46. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//47. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//48. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//49. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//50. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//51. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//52. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//53. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//54. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//55. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//56. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//57. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//58. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//59. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//60. TagManager
	RegisterUnityClass<TagManager>("Core");
	//61. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//62. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//63. InputManager
	RegisterUnityClass<InputManager>("Core");
	//64. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//65. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//66. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//67. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//68. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//69. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//70. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//71. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//72. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//73. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//74. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//75. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//76. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//77. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//78. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//79. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//80. Motion
	RegisterUnityClass<Motion>("Animation");
	//81. CGProgram
	RegisterUnityClass<CGProgram>("Core");
	//82. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//83. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//84. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//85. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");

}
