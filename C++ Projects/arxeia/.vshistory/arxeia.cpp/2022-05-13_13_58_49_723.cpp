#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//dhmiourgia arxeiou
	fstream arxeio;
	arxeio.open("arxeio.txt", fstream::app);

	arxeio << "fuck off";
	arxeio.close();
}