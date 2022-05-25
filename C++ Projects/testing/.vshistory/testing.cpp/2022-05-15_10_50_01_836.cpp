#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	while (GetMessage(&msg, nullptr, 0, 0)) {
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		switch (msg.message) {
		case WM_KEYDOWN:
			if ((GetAsyncKeyState(VK_ESCAPE) & 0x01) && bRunning) {
				Stop();
			}
			break;
		}
	}
}