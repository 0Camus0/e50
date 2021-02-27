#pragma once

#include <core/defs.h>
#include <core/structs.h>
#include <memory>

namespace Core {

    class RootOsLayerBase;
    class ApplicationBase {
        public:
            ApplicationBase(std::shared_ptr<RootOsLayerBase> pOsLayer) : pOsLayer(pOsLayer), state(e50_state_t::E50_STATE_UNINITIALIZED) {}
            virtual e50_result_t initVars() = 0;    //  Init vars only, no allocations
            virtual e50_result_t create() = 0;      //  Allocations
            virtual e50_result_t destroy() = 0;     //  Deallocate
            virtual e50_result_t update() = 0;      //  Loop
            virtual e50_result_t input() = 0;       //  Input handling
            virtual e50_result_t loadScene(std::shared_ptr<SceneBase> pScene) = 0;   //  Scene loader
        private:
            std::shared_ptr<RootOsLayerBase> pOsLayer;
            e50_state_t state;
    };
    class SceneBase {
        public:
            SceneBase(std::shared_ptr<RootOsLayerBase>) : pOsLayer(pOsLayer) {}
            virtual e50_result_t initVars() = 0;            //  Init vars only, no allocations
            virtual e50_result_t create() = 0;              //  Allocations
            virtual e50_result_t destroy() = 0;             //  Deallocate
            virtual e50_result_t update(uint64_t dt) = 0;   //  Loop
            virtual e50_result_t input() = 0;               //  Input processing
            virtual e50_result_t loadScene() = 0;           //  Init and allocate
            virtual e50_result_t destroyScene() = 0;        //  Deallocate
        private:
            std::shared_ptr<RootOsLayerBase> pOsLayer;
            e50_state_t state;
    };
    class RootOsLayerBase {
        public:
            RootOsLayerBase(std::shared_ptr<ApplicationBase> pApplication) : pApplication(pApplication) {}
            virtual e50_result_t create(AppDescriptor descriptor) = 0;
            virtual e50_result_t destroy() = 0;
            virtual e50_result_t update() = 0;
            virtual e50_result_t input() = 0;
        private: 
            std::shared_ptr<ApplicationBase> pApplication;
            e50_state_t state;
    };
}