#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//dhmiourgia arxeiou
	fstream toArxeioMou("mathima");

	if (toArxeioMou) {
		toArxeioMou << "fuck off";
	} else {
		ofstream kainourgioArxeio("mathima");
	}
	toArxeioMou.close();
}