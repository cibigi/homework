/*
Christian Battista Giannarelli
2020-03-12, 3 BINF

Searching a value in an array, an array (fixed loops)
*/

#include <iostream>

//Array fixed size
#define LENGHT 100

using namespace std;

//Prototypes: array uploading function, array searching function, printing array, sorting values
void upload(int[], unsigned short int);
bool find(int[], unsigned short int, int);
void print(int[], unsigned short int);
void sort(int[], unsigned short int);

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
	
    //Printing the array, sorting the array, printing the sorted array
    print(array, myLenght);
    sort(array, myLenght);
    print(array, myLenght);

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
    cout << endl;

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


//Printing function (array)
void print(int array[], unsigned short int myLenght)  {
    cout << endl;

    //Printing loop
    for(unsigned short int i= 0; i<myLenght; i++) {
        cout << i+1 << ") " << array[i] << endl;
    }
}

//Sorting function (array)
void sort(int array[], unsigned short int myLenght) {
    //Temp
    int tmp;

    //Sorting (fixed loops)
    for(unsigned short int i= 0; i<myLenght-1; i++) {
        for(unsigned short j= i+1; j<myLenght; j++) {
            if(array[i]>array[j]) {
                tmp= array[i];
                array[i]= array[j];
                array[j]= tmp;
            }
        }
    }
}