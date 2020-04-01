//CHRISTIAN B. GIANNARELLI, 3^BINF, 9/11/2019
//INPUT >> IL NUMERO DI VOTI, I VOTI
//OUTPUT << LA MEDIA DEI VOTI, IL NUMERO DI VOTI <6

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//DICHIARAZIONI
	short int V= 0, counter= 0, sum= 0, insuff= 0;
	float average= 0;
	
	//INPUT DEI VOTI, INCREMENTO DI SOMMA, CONTATORE E CONTATORE INSUFF.
	do {
		do {
			cout << "Inserire il voto " << counter << " (-1 per uscire):" << endl;
		    cin >> V;
		} while(V<-1 || V>10);
		
		if(V==-1) {
			break;
		} else if(V<6) {
			counter++;
			sum+=V;
			insuff++;
		} else {
			counter++;
			sum+=V;
		}
	} while(V>=0 || V!=-1);	
	
	//CALCOLO DELLA MEDIA
	if(counter>0) {
		average= sum/counter;
	}
	
	//OUTPUT
	cout << endl << "Media= " << average << endl
	     << "Insufficienze= " << insuff << endl;
	
	return 0;
}
