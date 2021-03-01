#pragma once

#include <b58/include/core/defs.h>
#include <b58/include/core/structs.h>
#include <b58/include/framework/input/input.h>
#include <memory>

namespace b58 {
    namespace Window {
        class WindowBase;
    }
    namespace Core {
        class RootFrameworkBase;
        class SceneBase;
        class B58_LIB_EXPORT ApplicationBase {
        public:
            ApplicationBase() : pFramework(nullptr) {}
            virtual e50_result_t initVars() = 0;    //  Init vars only, no allocations
            virtual e50_result_t create() = 0;      //  Allocations
            virtual e50_result_t destroy() = 0;     //  Deallocate
            virtual e50_result_t update() = 0;      //  Loop
            virtual e50_result_t input() = 0;       //  Input handling
            virtual e50_result_t loadScene(SceneBase* pScene) = 0;   //  Scene loader                        
        public:
            RootFrameworkBase* pFramework;
            Input::InputManager inputManager;
        };
        class B58_LIB_EXPORT SceneBase {
        public:
            SceneBase(RootFrameworkBase* pFramework) : pFramework(pFramework), state(e50_state_t::E50_STATE_UNINITIALIZED) {}
            virtual e50_result_t initVars() = 0;            //  Init vars only, no allocations
            virtual e50_result_t create() = 0;              //  Allocations
            virtual e50_result_t destroy() = 0;             //  Deallocate
            virtual e50_result_t update(uint64_t dt) = 0;   //  Loop
            virtual e50_result_t input() = 0;               //  Input processing
            virtual e50_result_t loadScene() = 0;           //  Init and allocate
            virtual e50_result_t destroyScene() = 0;        //  Deallocate
        protected:
            RootFrameworkBase* pFramework;
            e50_state_t state;
        };
        class B58_LIB_EXPORT RootFrameworkBase {
        public:
            RootFrameworkBase(ApplicationBase* pApplication) : pApplication(pApplication),
                                                               pWindow(nullptr),
                                                               state(e50_state_t::E50_STATE_UNINITIALIZED) 
            {
                pApplication->pFramework = this;
            }
            virtual e50_result_t create(AppDescriptor descriptor) = 0;
            virtual e50_result_t destroy() = 0;
            virtual e50_result_t update() = 0;

            ApplicationBase* pApplication;
            Window::WindowBase* pWindow;
            AppDescriptor descriptor;
            e50_state_t state;
        };
    }
}