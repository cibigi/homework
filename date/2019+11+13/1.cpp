//CHRISTIAN B. GIANNARELLI, 3^BINF, 9/11/2019
//INPUT >> DUE NUMERI
//OUTPUT << I NUMERI COMPRESI FRA IL PRIMO ED IL SECONDO VALORE

#include <iostream>
using namespace std;

int main() {
	//DICHIARAZIONI
	int n1= 0, n2= 0, nx= 0;
	
	//INPUT
	do {
		cout << "Inserire primo valore:" << endl;
		cin >> n1;
		cout << "Inserire secondo valore:" << endl;
		cin >> n2;
	} while(n1<=0 || n2<=0 || n1==n2);
	
	//SCAMBIO VARIABILI
	if(n2<n1) {
		nx= n2;
		n2= n1;
		n1= nx;
	}
	
	cout << endl;
	
	//OUTPUT
	for(int i= n1; i<= n2; i++) {
		cout << i << endl;
	}
	
	return 0;
}
