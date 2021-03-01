#include <app/include/App.h>
#include <iostream>

e50_result_t AppImp::initVars() {
    std::cout << "initVars" << std::endl;
    return e50_result_t::E50_RESULT_SUCCESS;
}

e50_result_t AppImp::create() {
    std::cout << "create" << std::endl;
    return e50_result_t::E50_RESULT_SUCCESS;
}

e50_result_t AppImp::destroy() {
    std::cout << "destroy" << std::endl;
    return e50_result_t::E50_RESULT_SUCCESS;
}

e50_result_t AppImp::update() {
    std::cout << "update" << std::endl;
    return e50_result_t::E50_RESULT_SUCCESS;
}

e50_result_t AppImp::input() {
    std::cout << "input" << std::endl;
    return e50_result_t::E50_RESULT_SUCCESS;
}

e50_result_t AppImp::loadScene(SceneBase* pScene) {
    std::cout << "loadScene" << std::endl;
    return e50_result_t::E50_RESULT_SUCCESS;
}
