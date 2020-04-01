/* Christian Battista Giannarelli, 21/11/2019, 3^BINF
Input >> due numeri
Output << i quadrati dei numeri compresi */

#include <iostream>
#include <cmath>
using namespace std;

//Prototipi delle seguenti funzioni: acquisizione dato, potenza di 2, stampa
int reader();
int powerTwo(int);
void print(int, int);

int main() {
    //Dichiarazione ed assegnamento valori variabili per i due numeri
    int n1= 0, n2= 0;
    do {
        n1= reader();
        n2= reader();
    } while(n1==n2);

    //Stampa
    print(n1, n2);

    return 0;
}

//Dichiarazione funzione di acquisizione
int reader() {
    //Dichiarazione variabile locale per la memorizzazione del valore
    int n= 0;
    do {
        cout << "Inserire numero >0:" << endl;
        cin >> n;
    } while(n<=0);
    cout << endl;
    
    //Ritorno del valore
    return n;
}

//Dichiarazione funzione di calcolo della potenza di due
int powerTwo(int n) {
    //Dichiarazione ed assegnamento valore (con calcolo) variabile locale
    int powN= 0;
    powN= n*n;

    //Ritorno della potenza calcolata
    return powN;
}

//Dichiarazione funzione di stampa
void print(int n1, int n2) {
    //Stampa
    for(int i= n1+1; i<n2; i++) {
        cout << endl << i << "^2= " <<powerTwo(i) << endl;
    }
}