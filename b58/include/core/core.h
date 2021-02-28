#pragma once

#include <core/defs.h>
#include <core/structs.h>
#include <framework/input/input.h>
#include <memory>

namespace Core {
    class RootOsLayerBase;
    class SceneBase;
    class B58_LIB_EXPORT ApplicationBase {
        public:
            ApplicationBase(RootOsLayerBase* pOsLayer) : pOsLayer(pOsLayer), pInputManager(nullptr), state(e50_state_t::E50_STATE_UNINITIALIZED) {}
            virtual e50_result_t initVars() = 0;    //  Init vars only, no allocations
            virtual e50_result_t create() = 0;      //  Allocations
            virtual e50_result_t destroy() = 0;     //  Deallocate
            virtual e50_result_t update() = 0;      //  Loop
            virtual e50_result_t input() = 0;       //  Input handling
            virtual e50_result_t loadScene(SceneBase* pScene) = 0;   //  Scene loader            
            virtual Input::InputManager* getInputManager() = 0;            
        protected:
            RootOsLayerBase* pOsLayer;
            Input::InputManager* pInputManager;
        public:
            e50_state_t state;
    };
    class B58_LIB_EXPORT SceneBase {
        public:
            SceneBase(RootOsLayerBase* pOsLayer) : pOsLayer(pOsLayer), state(e50_state_t::E50_STATE_UNINITIALIZED) {}
            virtual e50_result_t initVars() = 0;            //  Init vars only, no allocations
            virtual e50_result_t create() = 0;              //  Allocations
            virtual e50_result_t destroy() = 0;             //  Deallocate
            virtual e50_result_t update(uint64_t dt) = 0;   //  Loop
            virtual e50_result_t input() = 0;               //  Input processing
            virtual e50_result_t loadScene() = 0;           //  Init and allocate
            virtual e50_result_t destroyScene() = 0;        //  Deallocate
        protected:
            RootOsLayerBase* pOsLayer;
            e50_state_t state;
    };
    class B58_LIB_EXPORT RootFrameworkBase {
        public:
            RootFrameworkBase(ApplicationBase* pApplication) : pApplication(pApplication), state(e50_state_t::E50_STATE_UNINITIALIZED) {}
            virtual e50_result_t create(AppDescriptor descriptor) = 0;
            virtual e50_result_t destroy() = 0;
            virtual e50_result_t update() = 0;
            virtual e50_result_t input() = 0;
        protected: 
            ApplicationBase* pApplication;
            AppDescriptor descriptor;
            e50_state_t state;
    };
}