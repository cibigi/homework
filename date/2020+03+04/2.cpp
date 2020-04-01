/*
Christian Battista Giannarelli, 3^BINF, 4 marzo 2020
Inversione di un vettore
*/

#include <iostream>

//Dimensione fissa del vettore
#define DIM 100

using namespace std;

//Prototipi: caricamento vettore, inversione vettore, stampa
void carica(int[], unsigned short int);
void inversione(int[], unsigned short int, int[]);
void stampa(int[], unsigned short int);

int main() {
    //Vettori
    int vet[DIM], vetInvertito[DIM];

    //Dimensione effettiva del vettore
    unsigned short int n;
    do {
        cout << "Inserire la dimensione effettiva dei vettori, max= " << DIM << endl;
        cin >> n;
    } while(n>DIM || n<=1);

    //Caricamento del vettore
    carica(vet, n);

    //Inversione del vettore (in nuovo vettore)
    inversione(vet, n, vetInvertito);

    //Stampa del vettore invertito
    stampa(vetInvertito, n);

    return 0;
}

//Funzione di caricamento
void carica(int vet[], unsigned short int n) {
    //Ciclo di caricamento
    for(unsigned short int i= 0; i<n; i++) {
        cout << "Inserire il valore " << i+1 << endl;
        cin >> vet[i];
    }
}

//Funzione di attribuzione inversa dei valori del vettore al nuovo vettore (inversione del vettore)
void inversione(int vet[], unsigned short int n, int vetInvertito[]) {
    /* Inversione, attribuzione del vettore al nuovo vettore.
    Iniziando dalla posizione n-1 nel vettore e dalla posizione 0 nel nuovo vettore */
    unsigned short int posizioneVet= n-1;
    for(unsigned short int i= 0; i<n; i++) { 
        vetInvertito[i]= vet[posizioneVet];
        posizioneVet--;
    }
}

//Funzione di stampa del vettore invertito
void stampa(int vet[], unsigned short int n) {
    cout << endl;
    
    //Ciclo di stampa
    for(unsigned short int i= 0; i<n; i++) {
        cout << "Posizione " << i+1 << ") - " << vet[i] << endl;
    }
}