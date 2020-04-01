//Christian Battista Giannarelli, 16/01/2020, 3^BINF
//Input >> numero del giorno della settimana
//Output << nome del giorno della settimana

#include <iostream>
using namespace std;

int main() {
    //Dichiarazione ed assegnamento variabile per il numero del giorno
    short int giorno;
    do {
        cout << "Inserire valore 1-7" << endl;
        cin >> giorno;
    } while(giorno<1 || giorno>7);

    //Controllo del numero del giorno, stampa del nome corrispondente al giorno
    switch(giorno) {
        case 1:
            cout << endl << "Lunedi'" << endl;
            break;
        case 2:
            cout << endl << "Martedi'" << endl;
            break;
        case 3:
            cout << endl << "Mercoledi'" << endl;
            break;
        case 4:
            cout << endl << "Giovedi'" << endl;
            break;
        case 5:
            cout << endl << "Venerdi'" << endl;
            break;
        case 6:
            cout << endl << "Sabato" << endl;
            break;
        case 7:
            cout << endl << "Domenica" << endl;
            break;
    }

    return 0;
}