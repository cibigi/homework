//CHRISTIAN BATTISTA GIANNARELLI, 3^BINF, 13.12.2019
//TRACCIA 1: VERIFICA 12.12.2019

//NESSUN ERRORE

#include <iostream>
using namespace std;

float getValue();
float getResult(float, float);
void printResult(float);

int main() {
	float a, b, result;
	a= getValue();
	b= getValue();
	result= getResult(a, b);
	printResult(result);
	return 0;
}

float getValue() {
	float num;
	do {
	   cout << "Inserire lato (u)" << endl;
	   cin >> num;	
	} while(num<=0);
	return num;
}

float getResult(float a, float b) {
	float area;
	area= a*b;
	return area;
}

void printResult(float res) {
	cout << "Area (u^2)= " << res << endl;
}
