#include <b58/include/framework/window/window_imp_sdl.h>

#include <windows.h>

namespace b58 {
    namespace Window {
        e50_result_t WindowSDL::init() {
            if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0) {
                return e50_result_t::E50_RESULT_WINDOW_FAIL_INIT;
            }
            return e50_result_t::E50_RESULT_SUCCESS;
        }

        e50_result_t WindowSDL::createWindow(AppDescriptor desc) {
            uint32_t flags = SDL_WINDOW_SHOWN;
            flags |= (desc.vdriver == e50_vdriver_t::E50_VDRIVER_VULKAN) ? SDL_WINDOW_VULKAN : 0;
            flags |= (desc.vmode == e50_vmode_t::E50_VSTATE_FULLSCREEN) ? SDL_WINDOW_FULLSCREEN : 0;
            pSdlWindow = SDL_CreateWindow("e50", 0, 0, desc.width, desc.height, flags);
            if (pSdlWindow == nullptr) {
                SDL_Quit();
                return e50_result_t::E50_RESULT_WINDOW_SURFACE_FAIL_INIT;
            }
            return e50_result_t::E50_RESULT_SUCCESS;
        }

        e50_result_t WindowSDL::eventPolling(ApplicationBase* pApplication) {
            Input::InputManager* pInputManager = &pApplication->inputManager;
            SDL_Event e;
            while (SDL_PollEvent(&e)) {
                switch (e.type) {
                case SDL_KEYDOWN: {
                    if (e.key.keysym.sym == SDLK_ESCAPE) {
                        pApplication->pFramework->state = e50_state_t::E50_STATE_QUIT_TRIGGERED;
                    }
                    if (e.key.keysym.sym < cMaxKeys) {
                        pInputManager->keyStates[0][e.key.keysym.sym] = true;
                    }
                }break;
                case SDL_KEYUP: {
                    if (e.key.keysym.sym < cMaxKeys) {
                        pInputManager->keyStates[0][e.key.keysym.sym] = false;
                        pInputManager->keyStates[1][e.key.keysym.sym] = false;
                    }
                }break;

                case SDL_QUIT: {
                    pApplication->pFramework->state = e50_state_t::E50_STATE_QUIT_TRIGGERED;
                }break;
                }
            }

            static int32_t xDelta = 0;
            static int32_t yDelta = 0;
            int32_t x = 0, y = 0;

            SDL_GetMouseState(&x, &y);

            xDelta = x - xDelta;
            yDelta = y - yDelta;

            pInputManager->xDelta = xDelta;
            pInputManager->yDelta = yDelta;

            xDelta = x;
            yDelta = y;

            return e50_result_t::E50_RESULT_SUCCESS;
        }

        e50_result_t WindowSDL::changeMode(AppDescriptor desc) {
            return e50_result_t::E50_RESULT_NOT_SUPPORTED;
        }

        e50_result_t WindowSDL::destroyWindow() {
            SDL_DestroyWindow(this->pSdlWindow);
            return e50_result_t::E50_RESULT_SUCCESS;
        }

        e50_result_t WindowSDL::quit() {
            SDL_Quit();
            return e50_result_t::E50_RESULT_SUCCESS;
        }
    }
}