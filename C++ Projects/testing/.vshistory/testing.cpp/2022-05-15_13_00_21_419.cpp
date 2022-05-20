#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);
	while (true) {
		cout << "hello";
	}
}