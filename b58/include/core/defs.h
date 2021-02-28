#pragma once

#ifdef _LIB
#define B58_LIB_EXPORT __declspec(dllexport)
#else
#define B58_LIB_EXPORT __declspec(dllimport)
#endif

#include <cstdint>

constexpr uint32_t cMaxKeys     = 512;
constexpr uint32_t cMaxButtons  = 5;

namespace Core {
    typedef enum class _e50_result_t {
        E50_RESULT_SUCCESS                  = 0,
        E50_RESULT_UNINITIALIZED            = 0xf0001,
        E50_RESULT_NOT_SUPPORTED            = 0xf0002,
        E50_RESULT_THIRD_PARTY_FAILED       = 0xf0003,
        E50_RESULT_FAILED_PARTIAL_INIT      = 0xf0004,
        E50_RESULT_FAILED_FULL_INIT         = 0xf0005,
        E50_RESULT_WINDOW_FAIL_INIT         = 0xf0006,
        E50_RESULT_WINDOW_SURFACE_FAIL_INIT = 0xf0007,
    }e50_result_t;

    typedef enum class _e50_state_t {
        E50_STATE_UNINITIALIZED = 0,
        E50_STATE_CREATED,
        E50_STATE_LIGHT_INIT,
        E50_STATE_FULL_INIT,
        E50_STATE_PAUSE,
        E50_STATE_RUNNING,
        E50_STATE_LIGHT_DESTROY,
        E50_STATE_QUIT_TRIGGERED,
        E50_STATE_DESTROYED,
    }e50_state_t;

    typedef enum class _e50_vmode_t {
        E50_VSTATE_WINDOWED = 0,
        E50_VSTATE_FULLSCREEN
    }e50_vmode_t;

    typedef enum class _e50_vdriver_t {
        E50_VDRIVER_VULKAN = 0,
        E50_VDRIVER_D3D,
    }e50_vdriver_t;
}