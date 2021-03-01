#include <b58/include/framework/framework_imp.h>
#include <b58/include/framework/window/window_imp_sdl.h>

namespace b58 {
    namespace Framework {
        e50_result_t FrameworkImp::create(AppDescriptor descriptor) {
            this->descriptor = descriptor;

            if (pApplication->initVars() != e50_result_t::E50_RESULT_SUCCESS) {
                return e50_result_t::E50_RESULT_FAILED_PARTIAL_INIT;
            }

            this->state = e50_state_t::E50_STATE_LIGHT_INIT;

            if (descriptor.wmanager == e50_window_manager_t::E50_WINDOW_MANAGER_SDL) {
                pWindow = new Window::WindowSDL();
            }
            else {
                return e50_result_t::E50_RESULT_WINDOW_FAIL_INIT;
            }

            if (pWindow->init() != e50_result_t::E50_RESULT_SUCCESS) {
                return e50_result_t::E50_RESULT_WINDOW_FAIL_INIT;
            }

            if (pWindow->createWindow(descriptor) != e50_result_t::E50_RESULT_SUCCESS) {
                return e50_result_t::E50_RESULT_WINDOW_FAIL_INIT;
            }

            // Init driver.

            this->state = e50_state_t::E50_STATE_FULL_INIT;

            if (pApplication->create() != e50_result_t::E50_RESULT_SUCCESS) {
                return e50_result_t::E50_RESULT_FAILED_FULL_INIT;
            }

            this->state = e50_state_t::E50_STATE_RUNNING;

            return e50_result_t::E50_RESULT_SUCCESS;
        }

        e50_result_t FrameworkImp::destroy() {
            pApplication->destroy();
            pApplication = nullptr;
            pWindow->destroyWindow();
            pWindow->quit();
            delete pWindow;
            pWindow = nullptr;
            return e50_result_t::E50_RESULT_SUCCESS;
        }

        e50_result_t FrameworkImp::update() {
            while (this->state == e50_state_t::E50_STATE_RUNNING) {
                pWindow->eventPolling(pApplication);
                pApplication->input();
                pApplication->update();
            }
            return e50_result_t::E50_RESULT_SUCCESS;
        }
    }
}