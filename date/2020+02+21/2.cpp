/*
Christian Battista Giannarelli, 3^BINF, venerdì 21 febbraio 2020

2. Definire un vettore di N elementi...
    Scrivere:
        A) La funzione per caricare il vettore con numeri casuali tra 1 e 40;
        B) La funzione che ritorna la somma totale dei numeri del vettore;
        C) La funzione che calcola il numero dei numeri pari presenti nel vettore.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

//Dimensione massima vettore, valore generabile massimo
#define MAXSIZE 100
#define MAX 40

using namespace std;

//Caricamento, ottenimento somma, ottenimento numero di valori pari
void carica(unsigned short int[], unsigned short int);
unsigned int somma(unsigned short int[], unsigned short int);
unsigned short int pari(unsigned short int[], unsigned short int);

int main() {
    //Vettore e dimensione effettiva
    unsigned short int vals[MAXSIZE], n;
    
    //Lettura dimensione effettiva
    do {
        cout << "Inserire numero di lanci" << endl;
        cin >> n;
    } while(n<1 || n>MAXSIZE);

    //Caricamento
    carica(vals, n);

    //Stampa somma e numero di valori pari
    cout << endl << "Somma dei valori= " << somma(vals, n) << endl << endl;
    cout << "Numero di valori pari= " << pari(vals, n) << endl;

    return 0;
}

//Caricamento
void carica(unsigned short int vals[], unsigned short int n) {
    srand((unsigned)time(NULL));

    for(unsigned short int i= 0; i<n; i++) {
        vals[i]= rand()%MAX+1;
    }
}

//Ottenimento somma
unsigned int somma(unsigned short int vals[], unsigned short int n) {
    unsigned int somma= 0;
    for(unsigned short int i= 0; i<n; i++) {
        somma+=vals[i];
    }

    return somma;
}

//Ottenimento numero di valori pari
unsigned short int pari(unsigned short int vals[], unsigned short int n) {
    unsigned short int paric= 0;
    for(unsigned short int i= 0; i<n; i++) {
        if(vals[i]%2 == 0) {
            paric++;
        }
    }

    return paric;
}