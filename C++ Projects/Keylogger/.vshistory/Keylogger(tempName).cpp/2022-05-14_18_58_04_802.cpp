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
	while (true) {
		if (GetAsyncKeyState(0xBA) == -32767) {
			if (GetAsyncKeyState(VK_LSHIFT)) {
				cout << "LSHIFT PRESSED";
			} else {
				cout << "what Happened? ERROR??!!";
			}
		}
	}
}

