/*
Christian Battista Giannarelli, 2020-03-12, 3BINF
Searching a value in an array
*/

#include <iostream>

//Array fixed size
#define LENGHT 100

using namespace std;

//Prototypes: array uploading function, array searching function
void upload(int[], unsigned short int);
bool find(int[], unsigned short int, int);

int main() {
	//Array (fixed size), value for searching function
	int array[LENGHT], myNumber;
	
	//Actual array lenght, assignment
	unsigned short int myLenght;
	do {
		cout << "What is the actual array lenght? Max= " << LENGHT << endl;
		cin >> myLenght;
	} while(myLenght<=1 || myLenght>LENGHT);
	
	//Uploading function call
	upload(array, myLenght);
	
	//Searched value, assignment
	cout << endl << "What value are you looking for?" << endl;
	cin >> myNumber;
	
	//Searching function call (assignment to a boolean type variable)
	bool found= find(array, myLenght, myNumber);
	
	//Result printing
	cout << endl << "Value found: " << boolalpha << found << endl;
	
	return 0;
}

//Uploading (array values assignment) function
void upload(int array[], unsigned short int myLenght) {
	//Assignment loop
	for(unsigned short int i= 0; i<myLenght; i++) {
		cout << "Type value " << i+1 << endl;
		cin >> array[i];
	}
}

//Searching (through array values) function, returns a boolean value
bool find(int array[], unsigned short int myLenght, int myNumber) {
	//Boolean value
	bool found= false;
	
	//Array searching loop, quits if value is found
	for(unsigned short int i= 0; i<myLenght; i++) {
		if(array[i] == myNumber) {
			//Value found, quits
			found= true;
			break;
		}
	}
	
	//Returning boolean value
	return found;
}
