/*
Christian Battista Giannarelli
2020-03-04 - 3 BINF

Array concatenation (two or three arrays)
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

//SIZE: array fixed size - SUPERSIZE: concatenated array fixed size
#define SIZE 20
#define SUPERSIZE 60

using namespace std;

//Prototypes
void upload(int[], unsigned short int&);
unsigned short int concatenate(int[], unsigned short int, int[], unsigned short int, int[]);
void thirdArray(int[], unsigned short int, int[], unsigned short int&);
void print(int[], unsigned short int);

int main() {
	//Arrays, number of arrays, sizes
	int arr[SIZE], arr1[SIZE], arr2[SIZE], superArr[SUPERSIZE];
	unsigned short int myArrs, mySizeArr, mySizeArr1, mySizeArr2;

	//How many arrays
	do {
		cout << "How many arrays? 2-3" << endl;
		cin >> myArrs;
	} while(myArrs != 2 && myArrs != 3);

	//First array uploading
	cout << endl << "First array" << endl;
	upload(arr, mySizeArr);

	//Second array uploading
	cout << endl << "Second array" << endl;
	upload(arr1, mySizeArr1);

	//First and second array concatenation (super array)
	unsigned short int mySuperSize= concatenate(arr, mySizeArr, arr1, mySizeArr1, superArr);

	//In case there is a third array
	if(myArrs == 3) {
		//Third array uploading
		cout << endl << "Third array" << endl;
		upload(arr2, mySizeArr2);

		//Super and third array concatenation
		thirdArray(arr2, mySizeArr2, superArr, mySuperSize);
	}

	//Super array printing
	cout << endl << "Concatenated array:" << endl << endl;
	print(superArr, mySuperSize);

	return 0;
}

//Random values uploading function
void upload(int arr[], unsigned short int &size) {
	short int maxVal;
	srand((unsigned) time(NULL));

	//Defining actual array size
	do {
		cout << "How many values for this array? Max= " << SIZE << endl;
		cin >> size;
	} while(size < 2 || size > SIZE);
	
	cout << endl << "Assigning random values..." << endl << endl;

	//Defining maximum value
	cout << "Maximum value? --> ";
	cin >> maxVal;

	cout << endl;

	//Assignment
	for(unsigned short int i= 0; i < size; i++) {
		arr[i]= rand()%maxVal;
		cout << "Assigning value " << i+1 << " --> " << arr[i] << endl;
	}
}

//First and second array concatenation function
unsigned short int concatenate(int arr[], unsigned short int size, int arr1[], unsigned short int size1, int superArr[]) {
	//First array
	for(unsigned short int i= 0; i < size; i++) {
		superArr[i]= arr[i];
	}

	//Second array
	for(unsigned short int i= 0; i < size1; i++) {
		superArr[i+size]= arr1[i];
	}

	//Super array size
	return size+size1;
}

//Super and third array concatenation function
void thirdArray(int arr[], unsigned short int size, int superArr[], unsigned short int &superSize) {
	for(unsigned short int i= 0; i < size; i++) {
		superArr[i+superSize]= arr[i];
	}

	superSize+=size;
}

//Printing function
void print(int arr[], unsigned short int size) {
	for(unsigned short int i= 0; i < size; i++) {
		cout << i+1 << ") " << arr[i] << endl;
	}
}