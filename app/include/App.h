#pragma once

#include <b58/include/framework/framework_imp.h>

using namespace b58;
using namespace b58::Core;

class AppImp : public Core::ApplicationBase {
public:
    AppImp() : ApplicationBase() {}
    e50_result_t initVars() override;
    e50_result_t create() override;
    e50_result_t destroy() override;
    e50_result_t update() override;
    e50_result_t input() override;
    e50_result_t loadScene(SceneBase* pScene) override;
};