//CHRISTIAN BATTISTA GIANNARELLI, 3^BINF, 13.12.2019
//TRACCIA 3: VERIFICA 12.12.2019

//1 ERRORE: UTILIZZO DI UNA PAROLA RISERVATA PER IL NOME DI UNA VARIABILE

#include <iostream>
using namespace std;

float LeggiPrezzo();
float CalcolaSconto(float);
void StampaPrezzo(float, float);

int main() {
    float price, newPrice;
    price= LeggiPrezzo();
    newPrice= CalcolaSconto(price);
    StampaPrezzo(price, newPrice);
    return 0;
}

float LeggiPrezzo() {
    float pr;
    do {
        cout << "Inserire prezzo" << endl;
        cin >> pr;
    } while(pr<=0);
    return pr;
}

float CalcolaSconto(float oldPrice) {
    float finalPrice;
    if(oldPrice<10) {
        finalPrice= oldPrice;
    } else if(oldPrice>=10 && oldPrice<=100) {
        finalPrice= oldPrice*0.9;
    } else {
        finalPrice= oldPrice*0.85;
    }
    return finalPrice;
}

void StampaPrezzo(float old, float newP) {    //ERRORE CORRETTO: NOME "new" RISERVATO DA KEYWORD C++
    cout << "Prezzo iniziale= Euro " << old << endl;
    cout << "Prezzo finale= Euro " << newP << endl;
}