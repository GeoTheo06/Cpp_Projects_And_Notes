#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//eggrafh keimenou sto arxeio
	fstream arxeio;
	arxeio.open("arxeio.txt", fstream::app);
	arxeio << "\n This is content in a file!";

	//anakthsh keimenou apo arxeio ston kwdika.
	string periexomeno;
	ifstream periexomenoArxeiou("arxeio.txt");

	while (getline(periexomenoArxeiou, periexomeno)) { //note: to getline pairnei ana grammh to keimeno
		cout << periexomeno << endl;
	}

	arxeio.close(); //kleinw to arxeio giati alliws meinei anoixto sth mnhmh
}