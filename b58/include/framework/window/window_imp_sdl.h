#pragma once

#include <b58/include/framework/window/window.h>
#include <SDL.h>

namespace b58 {
    namespace Window {
        class B58_LIB_EXPORT WindowSDL : public WindowBase {
        public:
            WindowSDL() : pSdlWindow(nullptr) {}
            e50_result_t init() override;
            e50_result_t createWindow(AppDescriptor desc) override;
            e50_result_t eventPolling(ApplicationBase* pApplication) override;
            e50_result_t changeMode(AppDescriptor desc) override;
            e50_result_t destroyWindow() override;
            e50_result_t quit() override;
        private:
            SDL_Window* pSdlWindow;
        };
    }
}