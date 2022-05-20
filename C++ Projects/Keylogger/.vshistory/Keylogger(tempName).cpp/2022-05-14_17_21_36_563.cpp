#include <iostream>
#include <windows.h>
#include <conio.h>
#include <wtypes.h>
using namespace std;

int main() {
	/*HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
	*/

	if (GetAsyncKeyState(VK_SHIFT)) {
		cout << "i made it ?";
		system("timeout 10 > nul");
		cout << "hey";
	}
}