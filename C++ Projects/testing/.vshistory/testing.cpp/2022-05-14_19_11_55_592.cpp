#include <iostream>
using namespace std;

int main() {
	for (int i = 25; i < 49; i++)
		cout << " else if (GetAsyncKeyState(0x" << i << ") == -32767) { cout << \"\";}";
}