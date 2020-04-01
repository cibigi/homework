//CHRISTIAN B. GIANNARELLI, 3^BINF, 9/11/2019
//INPUT >> UN NUMERO
//OUTPUT << I QUADRATI DEI NUMERI COMPRESI FRA 1 ED IL VALORE INSERITO

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//DICHIARAZIONI
	int n= 0;
	
	//INPUT
	do {
		cout << "Inserire valore:" << endl;
		cin >> n;
	} while(n<=1);
	
	cout << endl;
	
	//OUTPUT
	for(int i= 1; i<= n; i++) {
		cout << i << "^2= " << pow(i, 2) << endl;
	}
	
	return 0;
}
