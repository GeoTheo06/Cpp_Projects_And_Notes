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
		if (GetAsyncKeyState(0x24) == -32767) {
			cout << " \"HOME\" ";
		} else if (GetAsyncKeyState(0x25) == -32767) {
			cout << " \"LEFT-ARROW\" ";
		} else if (GetAsyncKeyState(0x26) == -32767) {
			cout << " \"UP-ARROW\" ";
		} else if (GetAsyncKeyState(0x27) == -32767) {
			cout << " \"RIGHT-ARROW\" ";
		} else if (GetAsyncKeyState(0x28) == -32767) {
			cout << " \"DOWN-ARROW\" ";
		} else if (GetAsyncKeyState(0x29) == -32767) {
			cout << " \"SELECT\" ";
		} else if (GetAsyncKeyState(0x30) == -32767) {
			cout << " 0 ";
		} else if (GetAsyncKeyState(0x31) == -32767) {
			cout << " 1 ";
		} else if (GetAsyncKeyState(0x32) == -32767) {
			cout << " 2 ";
		} else if (GetAsyncKeyState(0x33) == -32767) {
			cout << " 3 ";
		} else if (GetAsyncKeyState(0x34) == -32767) {
			cout << " 4 ";
		} else if (GetAsyncKeyState(0x35) == -32767) {
			cout << " 5 ";
		} else if (GetAsyncKeyState(0x36) == -32767) {
			cout << " 6 ";
		} else if (GetAsyncKeyState(0x37) == -32767) {
			cout << " 7 ";
		} else if (GetAsyncKeyState(0x38) == -32767) {
			cout << " 8 ";
		} else if (GetAsyncKeyState(0x39) == -32767) {
			cout << " 9 ";
		} else if (GetAsyncKeyState(0x40) == -32767) {
			cout << " \"UNDEFINED\" ";
		} else if (GetAsyncKeyState(0x41) == -32767) {
			cout << " A ";
		} else if (GetAsyncKeyState(0x42) == -32767) {
			cout << " B ";
		} else if (GetAsyncKeyState(0x43) == -32767) {
			cout << " C ";
		} else if (GetAsyncKeyState(0x44) == -32767) {
			cout << " D ";
		} else if (GetAsyncKeyState(0x45) == -32767) {
			cout << " E ";
		} else if (GetAsyncKeyState(0x46) == -32767) {
			cout << " F ";
		} else if (GetAsyncKeyState(0x47) == -32767) {
			cout << " G ";
		} else if (GetAsyncKeyState(0x48) == -32767) {
			cout << " H ";
		} else if (GetAsyncKeyState(0x49) == -32767) {
			cout << " I ";
		}
	}
}

