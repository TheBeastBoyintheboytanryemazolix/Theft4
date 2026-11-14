// Direct Metal iOS builds do not bundle a Vulkan runtime. The legacy
// Vulkan compatibility archive is still compiled for shared renderer types,
// so provide weak loader entry points that let it link without pretending a
// Vulkan device exists. A real MoltenVK implementation can override these
// weak definitions when a build explicitly links one.
#include <vulkan/vulkan.h>

extern "C" __attribute__((weak)) VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
vkGetInstanceProcAddr(VkInstance, const char*) {
  return nullptr;
}

extern "C" __attribute__((weak)) VKAPI_ATTR void VKAPI_CALL
vkDestroyInstance(VkInstance, const VkAllocationCallbacks*) {}
