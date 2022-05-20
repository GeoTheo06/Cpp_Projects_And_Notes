#include <iostream>
#include <windows.h>
#include <conio.h>
#include <wtypes.h>
using namespace std;




int main() {
	int what = 0;
	/*HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
	*/
	while (true) {
		if (GetAsyncKeyState(what) == -32767) {
			cout << "LSHIFT PRESSED";
			cout << what;
		}
	}
}

