#pragma once

#include <b58/include/core/core.h>

namespace b58 {
    namespace Framework {
        using namespace Core;
        class B58_LIB_EXPORT FrameworkImp : public RootFrameworkBase {
        public:
            FrameworkImp(ApplicationBase* pBaseApp) : RootFrameworkBase(pBaseApp) {
                state = e50_state_t::E50_STATE_CREATED;
            }
            e50_result_t create(AppDescriptor descriptor) override;
            e50_result_t destroy() override;
            e50_result_t update() override;
        };
    }
}