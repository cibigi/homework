//Christian Battista Giannarelli, 23.01.2020, 3^BINF
//Input >> un numero
//Output << la matrice numerica di numero*numero

#include <iostream>
using namespace std;

int main() {
    //Lettura dimensione matrice
    short int size;
    do {
        cout << "Inserire valore per la grandezza della matrice" << endl;
        cin >> size;
    } while(size<2 || size>10);

    cout << endl << endl;

    //Ciclo di creazione della matrice
    for(int i= 0; i<size*size; i+=size) {
        //Ciclo di stampa della linea
        for(int ii= i; ii<i+size; ii++) {
            cout << ii << " ";

            //Inserimento spaziatura ulteriore per numeri ad una cifra
            if(ii<10) {
                cout << " ";
            }
        }

        //Ritorno accapo (creazione nuova linea)
        cout << endl;
    }

    cout << endl << endl;
    return 0;
}