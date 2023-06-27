#include "authorization.h"
#include <Windows.h>

using namespace SamsonovLr14KB24TxPrZS; // Назва проекту
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew authorization);
    return 0;
}

