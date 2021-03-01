#pragma once

#include <b58/include/core/defs.h>

#include <cstdint>

namespace b58 {
    namespace Core {

        struct B58_LIB_EXPORT AppDescriptor {
            AppDescriptor() : 
                width(1280),
                height(720),
                vmode(e50_vmode_t::E50_VSTATE_WINDOWED),
                vdriver(e50_vdriver_t::E50_VDRIVER_VULKAN),
                wmanager(e50_window_manager_t::E50_WINDOW_MANAGER_SDL){}
            uint32_t                width;
            uint32_t                height;
            e50_vmode_t             vmode;
            e50_vdriver_t           vdriver;
            e50_window_manager_t    wmanager;
        };
    }
}