/*
Christian Battista Giannarelli, 3^BINF, venerdì 21 febbraio 2020

4. Definire un vettore massimo 10 elementi...
    Scrivere:
        A) La funzione per leggere un numero N<100;
        B) La funzione per caricare il vettore con i primi 10 numeri naturali a partire dal valore di N;
        C) La funzione che stampa il vettore aggiornato.
*/

#include <iostream>

//Dimensione massima vettore, valore massimo di partenza
#define MAXSIZE 10
#define MAX 100

using namespace std;

//Lettura valore iniziale, caricamento, stampa
unsigned short int iniziale();
void carica(unsigned short int[], unsigned short int, unsigned short int);
void stampa(unsigned short int[], unsigned short int);

int main() {
    //Vettore e dimensione effettiva
    unsigned short int vals[MAXSIZE], n;

    //Lettura dimensione effettiva
    do {
        cout << "Inserire massimo" << endl;
        cin >> n;
    } while(n<1 || n>MAXSIZE);

    //Lettura valore iniziale, caricamento, stampa
    unsigned short int inizio= iniziale();
    carica(vals, n, inizio);  
    stampa(vals, n);

    return 0;
}

//Lettura valore iniziale
unsigned short int iniziale() {
    unsigned short int inizio;
    do {
        cout << "Inserire inizio" << endl;
        cin >> inizio;
    } while(inizio<1 || inizio>MAX);

    return inizio;
}

//Caricamento
void carica(unsigned short int vals[], unsigned short int n, unsigned short int inizio) {
    for(unsigned short int i= 0; i<n; i++) {
        vals[i]= inizio;
        inizio++;
    }
}

//Stampa
void stampa(unsigned short int vals[], unsigned short int n) {
    cout << endl;
    
    for(unsigned short int i= 0; i<n; i++) {
        cout << "Valore " << i+1 << ": " << vals[i] << endl;
    }
}