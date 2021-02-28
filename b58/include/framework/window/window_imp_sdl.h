#pragma once

#include <framework/window/window.h>
#include <SDL.h>

namespace Window {
    class B58_LIB_EXPORT WindowSDL : public WindowBase {
    public:
        WindowSDL() : pSdlWindow(nullptr) {}
        e50_result_t Init(AppDescriptor desc) override;
        e50_result_t EventPolling(ApplicationBase* pApplication) override;
        e50_result_t ChangeMode(AppDescriptor desc) override;
        e50_result_t Destroy() override;
    private:
        SDL_Window* pSdlWindow;
    };
}