#pragma once

#include <core/defs.h>
#include <core/core.h>
#include <core/structs.h>

namespace Window {
    using namespace Core;
    class B58_LIB_EXPORT WindowBase {
    public:
        virtual e50_result_t Init(AppDescriptor desc) = 0;
        virtual e50_result_t EventPolling(ApplicationBase *pApplication) = 0;
        virtual e50_result_t ChangeMode(AppDescriptor desc) = 0;
        virtual e50_result_t Destroy() = 0;
    };
}
