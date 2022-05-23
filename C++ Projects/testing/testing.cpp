#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int points = rand() % 400 + 200;//from 200 to 600 (It is 600 and not a mistake)
	int enemyPoints = rand() % 400 + 200;
	cout << points << enemyPoints;
}