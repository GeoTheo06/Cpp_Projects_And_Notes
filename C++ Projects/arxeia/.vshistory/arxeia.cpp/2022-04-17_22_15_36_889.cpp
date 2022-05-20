#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //dhmiourgia arxeiou
    ofstream toArxeioMou("mathima");

    //eggrafh keimenou se arxeio
    toArxeioMou << "eggrafh keimenou se ekswteriko arxeio" << endl;

    //anakthsh keimenou apo arxeio ston kwdika.
    string periexomeno;
    ifstream periexomenoArxeiou("mathima");

    while (getline(periexomenoArxeiou, periexomeno)) { //note: to getline pairnei ana grammh to keimeno
        cout << periexomeno << endl;
    }

    //kleisimo arxeiwn
    toArxeioMou.close();
}