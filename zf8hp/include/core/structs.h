#pragma once

#include <core/defs.h>

#include <cstdint>

namespace Core {
    
    typedef struct _AppDescriptor{
        _AppDescriptor() : width(1280), height(720), vmode(e50_vmode_t::E50_VSTATE_WINDOWED){}
        uint32_t    width;
        uint32_t    height;
        e50_vmode_t vmode;
    }AppDescriptor;
    
    
}