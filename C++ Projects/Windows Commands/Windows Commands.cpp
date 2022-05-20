#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	//mporeis na steileis batch commands gia na elegxeis to cmd. To pio xrhsimo mallon tha einai auto:
	system("timeout 2 > nul"); // to "> nul" kanei na mhn fainetai to "waiting 2 seconds \n waiting 1 second"
	Sleep(2000); //Auto einai poly kalytero alla xreiazetai to windows.h library
	//system("shutdown - s - t 1");
	//system("ipconfig /release");
}