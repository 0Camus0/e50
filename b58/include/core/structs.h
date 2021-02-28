#pragma once

#include <core/defs.h>

#include <cstdint>

namespace Core {
    
    typedef struct B58_LIB_EXPORT _AppDescriptor{
        _AppDescriptor() : width(1280), 
                           height(720),
                           vmode(e50_vmode_t::E50_VSTATE_WINDOWED),
                           vdriver(e50_vdriver_t::E50_VDRIVER_VULKAN) {}
        uint32_t        width;
        uint32_t        height;
        e50_vmode_t     vmode;
        e50_vdriver_t   vdriver;
    }AppDescriptor;
    
    
}