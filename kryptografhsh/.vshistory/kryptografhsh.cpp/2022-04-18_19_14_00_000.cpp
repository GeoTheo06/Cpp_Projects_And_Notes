#include <iostream>
#include <string>
using namespace std;

int main() {

    srand(time(0));
    char privateKey[20] = { 'M','a','g','n','e','t','o','h','y','d','r','o','d','y','n','a','m','i','c','s' };

    string text;
    cout << "Grapse to keimeno pou thes na kryptografhthei: ";
    getline(cin, text);

    int textLength = text.length(); //apothikevw ton arithmo twn xarakthrwn pou exei to keimeno tou xrhsth sto "textLength"
    char* textChar = new char[textLength];

    strcpy(textChar, text.c_str()); //metatrepw to string "text" se char "textChar"

    int charactersNum[20];//oi arihmoi pou antistoixoun sto kathe gramma tou "privateKey"
    for (int i = 0; i < 20; i++) {
        charactersNum[i] = privateKey[i];
    }

    int* textNum = new int[textLength];
    for (int i = 0; i < textLength; i++) {
        textNum[i] = textChar[i];
    }

    //kanw random ta grammata tou privateKey kai apothikevw ton arithmo me ton opoio prostethikan sto "additionNumbers"
    int additionNumbers[20];
    for (int i = 0; i < 20; i++) {
        additionNumbers[i] = (rand() % 90) + 1; //apo 1 ews 90
        charactersNum[i] += additionNumbers[i];
        if (charactersNum[i] > 126) {
            int temp = charactersNum[i] - 126;
            charactersNum[i] = temp + 32;
        }
        privateKey[i] = charactersNum[i];
        cout << privateKey[i];
    }
    cout << " ";

    char* kryptografhmenoKeimeno = new char[textLength];
    int w = 0;
    for (int i = 0; i < textLength; i++) {
        if (textNum[i] == 32) {
            w += 1;
            kryptografhmenoKeimeno[i] = 32;
        }
        else {
            textNum[i] += additionNumbers[w];
            if (textNum[i] > 126) {
                int temp = textNum[i] - 126;
                textNum[i] = temp + 32;
            }
            kryptografhmenoKeimeno[i] = textNum[i];
        }
    }

    for (int i = 0; i < textLength; i++) {
        cout << kryptografhmenoKeimeno[i];
    }
}