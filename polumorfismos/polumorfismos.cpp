#include <iostream>
using namespace std;

class Fito {
public:
    void arwma() {
        cout << "oudetero arwma" << endl;
    }
};

class Paparouna : public Fito {
public:
    void arwma() {
        cout << "glyko arwma" << endl;
    }
};

class Margarita : public Fito {
public:
    void arwma() {
        cout << "almiro" << endl;
    }
};

int main() {
    //ousiastika o polymorfismos sou epitrepei na ftiaxneis childs ta opoia exoun mesa functions me to idio onoma, tha parei to teleytaio funciton pou pairnei. P.X. H Paparouna Tha mporouse na parei to function arwma tou Fito epeidh genika ta childs pairnoun ta stoixeia twn gonwin tous, alla o poumorfismos, sou dinei to teleutaio function pou briskei, opote anti gia "oudetero arwma" tha sou dwsei "glyko arwma" 
    Fito toFitoMou;
    toFitoMou.arwma();

    Margarita iMargaritaMou;
    iMargaritaMou.arwma();

    Paparouna iPaparounaMou;
    iPaparounaMou.arwma();
}