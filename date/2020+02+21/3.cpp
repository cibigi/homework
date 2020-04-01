/*
Christian Battista Giannarelli, 3^BINF, venerdì 21 febbraio 2020

3. Definire un vettore massimo 10 elementi...
    Scrivere:
        A) La funzione per caricare il vettore con i primi 10 numeri naturali a partire da 1;
        B) La funzione che aggiorna ogni elemento contenuto nel vettore con il suo quadrato;
        C) La funzione che stampa il vettore aggiornato.
*/

#include <iostream>

//Dimensione massima vettore
#define MAXSIZE 10

using namespace std;

//Caricamento, aggiornamento valori, stampa
void carica(unsigned short int[], unsigned short int);
void aggiornamento(unsigned short int[], unsigned short int);
void stampa(unsigned short int[], unsigned short int);

int main() {
    //Vettore e dimensione effettiva
    unsigned short int vals[MAXSIZE], n;

    //Lettura dimensione effettiva
    do {
        cout << "Inserire massimo" << endl;
        cin >> n;
    } while(n<1 || n>MAXSIZE);

    //Caricamento, aggiornamento valori, stampa
    carica(vals, n);
    aggiornamento(vals, n);
    stampa(vals, n);

    return 0;
}

//Caricamento
void carica(unsigned short int vals[], unsigned short int n) {
    for(unsigned short int i= 0; i<n; i++) {
        vals[i]= i+1;
    }
}

//Aggiornamento valori
void aggiornamento(unsigned short int vals[], unsigned short int n) {
    for(unsigned short int i= 0; i<n; i++) {
        vals[i]*=vals[i];
    }
}

//Stampa
void stampa(unsigned short int vals[], unsigned short int n) {
    cout << endl;
    
    for(unsigned short int i= 0; i<n; i++) {
        cout << "Valore del quadrato di " << i+1 << ": " << vals[i] << endl;
    }
}