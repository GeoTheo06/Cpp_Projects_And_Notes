#include <iostream>
#include <windows.h>
#include <conio.h>
#include <wtypes.h>
using namespace std;


LRESULT CALLBACK HostWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
	switch (message) {
	case WM_KEYDOWN:
		switch (wParam) {
		case VK_LEFT:

			cout << "GAYYYYY";

			break;

		case VK_RIGHT:

			// Process the RIGHT ARROW key. 

			break;

		case VK_UP:

			// Process the UP ARROW key. 

			break;

		case VK_DOWN:

			// Process the DOWN ARROW key. 

			break;

		case VK_HOME:

			// Process the HOME key. 

			break;

		case VK_END:

			// Process the END key. 

			break;

		case VK_INSERT:

			// Process the INS key. 

			break;

		case VK_DELETE:

			// Process the DEL key. 

			break;

		case VK_F2:

			// Process the F2 key. 

			break;


		// Process other non-character keystrokes. 

		default:
			break;
		}
	}
}

int main() {
	/*HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);
	*/


}

