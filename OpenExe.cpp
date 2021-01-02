#define STRICT
#pragma comment(lib, "shell32")
#pragma comment(lib, "ole32")
#include <Windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);
    unsigned long long ret = (unsigned long long)ShellExecuteW(NULL, L"open", pCmdLine, NULL, NULL, SW_SHOWNORMAL);
    CoUninitialize();
    return ret == 32 ? 0 : 1;
}