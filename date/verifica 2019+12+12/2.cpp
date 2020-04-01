//CHRISTIAN BATTISTA GIANNARELLI, 3^BINF, 13.12.2019
//TRACCIA 2: VERIFICA 12.12.2019

//1 ERRORE: TIPO FUNZIONE NELLA DICHIARAZIONE DIVERSO RISPETTO AL PROTOTIPO

#include <iostream>
using namespace std;

int LeggiNum();
int CalcolaModulo(int);
int CalcolaCubo(int);
void StampaCubo(int, int);

int main() {
    int x1, x2;
    x1= LeggiNum();
    x2= LeggiNum();
    x1= CalcolaModulo(x1);
    x2= CalcolaModulo(x2);
    StampaCubo(x1, x2);
    return 0;
}

int LeggiNum() {
    int num;
    do {
        cout << "Inserire valore" << endl;
        cin >> num;
    } while(num>100 || num<-100);
    return num;
}

int CalcolaModulo(int num) {
    int newNum;
    if(num<0) {
        newNum= -1*num;
    } else {
        newNum= num;
    }
    return newNum;
}

int CalcolaCubo(int num) {
    int cube;
    cube= num*num*num;
    return cube;
}

void StampaCubo(int num1, int num2) {    //ERRORE CORRETTO: TIPO FUNZIONE "int" DIVERSO DA PROTOTIPO
    if(num1>num2) {
        int temp;
        temp= num1;
        num1= num2;
        num2= temp;
    }

    for(int i= num1+1; i<num2; i++) {
        int thisCube= CalcolaCubo(i);
        cout << thisCube << endl;
    }
}