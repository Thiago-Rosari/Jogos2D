#include <windows.h>

int APIENTRY WinMain(_In_ HINSTANCE hInstance,
					 _In_opt_ HINSTANCE hPrevInstance,
					 _In_ LPSTR IpCmdLine,
					 _In_ int nCmdShow)
{
	MessageBox(NULL, "Hello Windows!", "Messagem", 0);

	return 0;
}