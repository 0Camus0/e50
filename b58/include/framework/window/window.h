#pragma once

#include <b58/include/core/defs.h>
#include <b58/include/core/core.h>
#include <b58/include/core/structs.h>

namespace b58 {
    namespace Window {
        using namespace Core;
        class B58_LIB_EXPORT WindowBase {
        public:
            virtual e50_result_t init() = 0;
            virtual e50_result_t createWindow(AppDescriptor desc) = 0;
            virtual e50_result_t eventPolling(ApplicationBase* pApplication) = 0;
            virtual e50_result_t changeMode(AppDescriptor desc) = 0;
            virtual e50_result_t destroyWindow() = 0;
            virtual e50_result_t quit() = 0;
        };
    }
}
