/* Christian Battista Giannarelli, 21/11/2019, 3^BINF
Input >> il raggio di un cerchio
Output << l'area del cerchio */

#include <iostream>
#include <cmath>
using namespace std;

//Prototipi delle seguenti funzioni: acquisizione dato, calcolo dell'area, stampa
float reader();
float calc(float);
void print(float);

int main() {
    //Dichiarazione ed assegnamento valori variabile raggio
    int ray= 0;
    ray= reader();

    //Stampa
    print(ray);

    return 0;
}

//Dichiarazione funzione di acquisizione
float reader() {
    //Dichiarazione variabile locale per la memorizzazione del valore
    float n= 0;
    do {
        cout << "Inserire numero >0:" << endl;
        cin >> n;
    } while(n<=0);

    //Ritorno del valore
    return n;
}

//Dichiarazione funzione di calcolo dell'area
float calc(float ray) {
    //Dichiarazione ed assegnamento valore (con calcolo) variabile locale
    float surface= 0;
    surface=M_PI*pow(ray, 2);

    //Ritorno dell'area calcolata
    return surface;
}

//Dichiarazione funzione di stampa
void print(float ray) {
    //Stampa
    cout << endl << "Area= " << calc(ray) << endl;
}