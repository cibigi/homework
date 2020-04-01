//CHRISTIAN B. GIANNARELLI, 3^BINF, 9/11/2019
//INPUT >> IL NUMERO DI VOTI, I VOTI
//OUTPUT << LA MEDIA DEI VOTI, IL NUMERO DI VOTI <6

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//DICHIARAZIONI
	short int n= 0, V= 0, sum= 0, insuff= 0;
	float average= 0;
	
	//INPUT
	do {
		cout << "Inserire numero di voti:" << endl;
		cin >> n;
	} while(n<=1);
	
	cout << endl;
	
	//INPUT DEI VOTI, INCREMENTO DI SOMMA E CONTATORE INSUFF.
	for(int i= 1; i<= n; i++) {
		do {
		    cout << "Voto " << i << ":" << endl;
		    cin >> V;
	    } while(V<0 || V>10);
	    
		sum+=V;
		
		if(V<6) {
			insuff++;
		}
	}
	
	//CALCOLO DELLA MEDIA
	average= sum/n;
	
	//OUTPUT
	cout << endl << "Media= " << average << endl
	     << "Insufficienze= " << insuff << endl;
	
	return 0;
}
