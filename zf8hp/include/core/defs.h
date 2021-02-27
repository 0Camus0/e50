#pragma once

namespace Core {
    typedef enum class _e50_result_t {
        E50_RESULT_SUCCESS = 0,
        E50_RESULT_UNINITIALIZED = 0xf0000001,
        E50_RESULT_NOT_SUPPORTED = 0xf0000002,
        E50_RESULT_THIRD_PARTY_FAILED = 0xf0000003,
    }e50_result_t;

    typedef enum class _e50_state_t {
        E50_STATE_UNINITIALIZED = 0,
        E50_STATE_LIGHT_INIT,
        E50_STATE_FULL_INIT,
        E50_STATE_PAUSE,
        E50_STATE_RUNNING,
        E50_STATE_LIGHT_DESTROY,
        E50_STATE_DESTROYED,
    }e50_state_t;

    typedef enum class _e50_vmode_t {
        E50_VSTATE_WINDOWED = 0,
        E50_VSTATE_FULLSCREEN
    }e50_vmode_t;
}