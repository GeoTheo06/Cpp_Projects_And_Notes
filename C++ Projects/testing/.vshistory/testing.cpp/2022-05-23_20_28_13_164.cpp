#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int test = (rand() % 90) + 1;
	cout << test;
}