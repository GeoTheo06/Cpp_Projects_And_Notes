#include <iostream>
#include <windows.h>
#include <conio.h>
#include <wtypes.h>
#define _WIN32_WINNT 0x050
using namespace std;

int main() {
	/*HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
	*/

	if (GetAsyncKeyState(VK_SHIFT)) {
		cout << "i made it ?";
	}
}