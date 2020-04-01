/*
Christian Battista Giannarelli, 3^BINF, venerdì 21 febbraio 2020

1. Definire un vettore per registrare le temperature di un mese (30 temperature)...
    Scrivere:
        A) La funzione per caricare il vettore con le temperature;
        B) La funzione per calcolare e ritornare la temperatura media mese;
        C) La funzione per stampare il contenuto del vettore.
*/

#include <iostream>

//Dimensione vettore
#define MESE 30

using namespace std;

//Caricamento, ottenimento media, stampa
void carica(short int[]);
float media(short int[]);
void stampa(short int[]);

int main() {
    //Vettore
    short int temps[MESE];

    //Caricamento
    carica(temps);

    //Stampa della media e del vettore
    cout << endl << "Media= " << media(temps) << " C" << endl;
    stampa(temps);

    return 0;
}

//Caricamento
void carica(short int temps[]) {
    for(unsigned short int i= 0; i<MESE; i++) {
        cout << "Inserire temperatura (C) " << i+1 << endl;
        cin >> temps[i];
    }
}

//Ottenimento media
float media(short int temps[]) {
    int somma= 0;
    for(unsigned short int i= 0; i<MESE; i++) {
        somma+=temps[i];
    }

    return somma/MESE;
}

//Stampa
void stampa(short int temps[]) {
    cout << endl;

    for(unsigned short int i= 0; i<MESE; i++) {
        cout << "Temperatura " << i+1 << ": " << temps[i] << " C" << endl;
    }
}