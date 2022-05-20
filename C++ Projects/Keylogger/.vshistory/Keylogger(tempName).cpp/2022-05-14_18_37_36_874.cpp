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

	SHORT GetAsyncKeyState(
		int vKey
	);
	cout << GetAsyncKeyState;
}