#include <framework/framework_imp.h>

namespace Framework {
    e50_result_t FrameworkImp::create(AppDescriptor descriptor) {
        if (pApplication->initVars() != e50_result_t::E50_RESULT_SUCCESS) {
            return e50_result_t::E50_RESULT_FAILED_PARTIAL_INIT;
        }

        this->state = e50_state_t::E50_STATE_LIGHT_INIT;

        // Init window.
        // Init driver.

        if (pApplication->create() != e50_result_t::E50_RESULT_SUCCESS) {
            return e50_result_t::E50_RESULT_FAILED_FULL_INIT;
        }

        return e50_result_t::E50_RESULT_SUCCESS;
    }

    e50_result_t FrameworkImp::destroy() {
        return e50_result_t::E50_RESULT_SUCCESS;
    }

    e50_result_t FrameworkImp::update() {
        return e50_result_t::E50_RESULT_SUCCESS;
    }

    e50_result_t FrameworkImp::input() {
        return e50_result_t::E50_RESULT_SUCCESS;
    }
}