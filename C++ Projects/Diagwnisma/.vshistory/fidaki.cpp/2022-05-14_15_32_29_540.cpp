#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

//DEN TO KATALAVA
enum eDirection {
	STOP = 0, LEFT, RIGHT, UP, DOWN
};
eDirection dir;
//

void Setup() {
	gameOver = false;
	dir = STOP;

	x = width / 2; // to kanw dia 2 gia na topothetithei sto kentro
	y = height / 2;

	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void Draw() {
	system("cls");
	for (int i = 0; i < width + 2; i++) {
		cout << "#";
	}
	cout << endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				cout << "#";
			}
			cout << endl;
		}
		if (i == y && j == x) {
			cout << "O";
		} else if (i == fruitY && j = fruitX) {
			cout << "F";
		} else {
			bool print = false;
			for (int k = 0; k < nTail; k++) {
				if (tailX[k] == j && tailY[k] == i) {
					cout << "O";
					print = true;
				}
			}
			if (!print) {
				cout << " ";
			}
		}
		if (j == width - 1) {
			cout << "#";
		}
	}
	cout << endl;
}
for (int i = 0; i < width + 2; i++) {
	cout << "#";
}
cout << endl;
cout << "score: " << score << endl;
}

void Input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}

void Logic() {
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;

	for (int i = 1; i < nTail; i++) {
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir) {
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	}
	if (x >= width) {
		x = 0;
	} else if (x < 0) {
		x = width - 1;
	}
	if (y >= height) {
		y = 0;
	} else if (y < 0) {
		y = height - 1;
	}
	for (int i = 0; i < nTail; i++) {
		if (tailX[i] == X && tailY[i] == y) {
			gameOver = true;
		}
	}
	if (x == fruitX && y == fruitY) {
		score += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
	}
}

int main() {

	Setup();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
		Sleep(10);
	}
}