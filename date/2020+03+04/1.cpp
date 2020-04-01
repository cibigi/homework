/*
Christian Battista Giannarelli, 3^BINF, 4 marzo 2020
Media dei valori in un vettore, numero di valori oltre la media
*/

#include <iostream>

//Dimensione fissa del vettore
#define DIM 100

using namespace std;

//Prototipi: caricamento vettore, media, valori oltre la media
void carica(int[], unsigned short int);
float media(int[], unsigned short int);
unsigned short int oltreMedia(int[], unsigned short int, float);

int main() {
    //Vettore
    int vet[DIM];

    //Dimensione effettiva del vettore
    unsigned short int n;
    do {
        cout << "Inserire la dimensione effettiva del vettore, max= " << DIM << endl;
        cin >> n;
    } while(n>DIM || n<=1);

    //Caricamento del vettore
    carica(vet, n);

    //Calcolo e stampa della media
    float mediaOttenuta= media(vet, n);
    cout << endl << "Media= " << mediaOttenuta << endl;

    //Conteggio e stampa del numero di valori oltre la media
    cout << oltreMedia(vet, n, mediaOttenuta) << " valori oltre la media" << endl;

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

//Funzione di calcolo della media
float media(int vet[], unsigned short int n) {
    //Variabile e ciclo di somma dei valori
    int somma= 0;
    for(unsigned short int i= 0; i<n; i++) {
        somma+=vet[i];
    }

    //Ritorno della media
    return (float)somma/n;
}

//Funzione di conteggio del numero di valori oltre la media
unsigned short int oltreMedia(int vet[], unsigned short int n, float mediaOttenuta) {
    //Variabile e ciclo di conteggio condizionato
    unsigned short int contatore= 0;
    for(unsigned short int i= 0; i<n; i++) {
        if(vet[i]>mediaOttenuta) {
            contatore++;
        }  
    }

    //Ritorno del contatore
    return contatore;
}