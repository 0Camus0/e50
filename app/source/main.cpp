
#include <app/include/App.h>
#include <iostream>

using namespace b58;
using namespace b58::Framework;

ApplicationBase* pApp = nullptr;
RootFrameworkBase * pFramework = nullptr;

int main()
{
    pApp = new AppImp();
    pFramework = new FrameworkImp(pApp);

    AppDescriptor desc;
    desc.width = 1280;
    desc.height = 720;
    desc.vdriver = e50_vdriver_t::E50_VDRIVER_VULKAN;
    desc.wmanager = e50_window_manager_t::E50_WINDOW_MANAGER_SDL;
    desc.vmode = e50_vmode_t::E50_VSTATE_WINDOWED;

    pFramework->create(desc);
    pFramework->update();
    pFramework->destroy();

    delete pApp; pApp = nullptr;
    delete pFramework; pFramework = nullptr;

}
