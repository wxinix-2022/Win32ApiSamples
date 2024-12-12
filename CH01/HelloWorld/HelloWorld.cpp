#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    MessageBox(nullptr, TEXT("Hello World!"), TEXT("Caption"), MB_OKCANCEL | MB_ICONINFORMATION | MB_DEFBUTTON2);
    return 0;
}