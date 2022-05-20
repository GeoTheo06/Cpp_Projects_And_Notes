#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <wtypes.h>

using namespace std;

int main() {
	fstream arxeio;
	arxeio.open("arxeio.txt", fstream::app);

	//ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);
	cout << "Some  information is displayed.. \n\n";
	Sleep(5000);

	cout << "wait.. the console is going to hide and run in background.. \n";
	Sleep(5000);
	ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);

	while (true) {
		cout << "hello";
	}
}