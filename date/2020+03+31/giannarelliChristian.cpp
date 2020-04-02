/*
Christian Battista Giannarelli
31, March 2020

Array Manipulation Tool (features a menu)
*/



#include <iostream>
#include <stdlib.h>
#include <time.h>

//Fixed array size
#define SIZE 20

using namespace std;



//This is used to detect if the array has received values
bool hasBeenUploaded= false;



//Prototypes
void menu(short int[], unsigned short int);
void uploadValues(short int[], unsigned short int);
void uploadRandomValues(short int[], unsigned short int);
void youMustUpload(short int[], unsigned short int);
void getStats(short int[], unsigned short int);
void reverse(short int[], unsigned short int);
void sort(short int[], unsigned short int);
void print(short int[], unsigned short int, bool);



int main() {
	short int array[SIZE];
	unsigned short int mySize;

	cout << endl << "Welcome to the Array Manipulation Tool!" << endl << "Christian Battista Giannarelli, 2020" << endl << endl;

	//Actual array size
	do {
		cout << "What is the array size? Max= " << SIZE << " --> ";
		cin >> mySize;
	} while(mySize<2 || mySize>SIZE);

	//Entering the menu (everything starts from here)
	menu(array, mySize);

	return 0;
}



//Menu function
void menu(short int array[], unsigned short int size) {
	unsigned short int selection;
	do {
		cout << endl << "Choose which operation you want to perform:" << endl << " 0) Upload values to the array (manually)" << endl << " 1) Upload values to the array (randomly)" << endl << " 2) Get statistics" << endl << " 3) Reverse the array" << endl << " 4) Sort the array" << endl << " 5) Print the array" << endl << " 6) Quit" << endl << " --> ";
		cin >> selection;

		switch(selection) {
			//Manual upload
			case 0:
				uploadValues(array, size);
				break;

			//Random upload
			case 1:
				uploadRandomValues(array, size);
				break;

			//Statistics
			case 2:
				if(hasBeenUploaded) {
					getStats(array, size);
				} else {
					youMustUpload(array, size);
				}
				break;

			//Reversing
			case 3:
				if(hasBeenUploaded) {
					reverse(array, size);
				} else {
					youMustUpload(array, size);
				}
				break;

			//Sorting
			case 4:
				if(hasBeenUploaded) {
					sort(array, size);
				} else {
					youMustUpload(array, size);
				}
				break;

			//Printing
			case 5:
				if(hasBeenUploaded) {
					cout << endl;
					print(array, size, true);
				} else {
					youMustUpload(array, size);
				}
				break;

			case 6:
				break;
		} 
	} while(selection>6 || selection<0);
}



//Uploading function
void uploadValues(short int array[], unsigned short int size) {
	cout << endl << "Welcome to the manual assignment process!" << endl << endl;

	for(unsigned short int i= 0; i<size; i++) {
		cout << "Assign value " << i+1 << " --> ";
		cin >> array[i];
	}

	hasBeenUploaded= true;
	menu(array, size);
}



//Random values uploading function
void uploadRandomValues(short int array[], unsigned short int size) {
	short int maxVal;
	srand((unsigned) time(NULL));
	
	cout << endl << "Assigning random values..." << endl << endl;

	cout << "Maximum value? --> ";
	cin >> maxVal;

	cout << endl;

	for(unsigned short int i= 0; i<size; i++) {
		array[i]= rand()%maxVal;
		cout << "Assigning value " << i+1 << " --> " << array[i] << endl;
	}

	hasBeenUploaded= true;
	menu(array, size);
}



//Function providing upload methods (in case the user must upload the values)
void youMustUpload(short int array[], unsigned short int size) {
	char option;

	cout << endl << "Upload values to the array first!" << endl << endl;

	do {
		cout << "Manually (m) -or- Randomly (r) --> ";
		cin >> option;
	} while(option!='m' && option!='r');

	if(option == 'm') {
		uploadValues(array, size);
	} else {
		uploadRandomValues(array, size);
	}
}



//Statistics function
void getStats(short int array[], unsigned short int size) {
	long int sum= 0, evenSum= 0, oddSum= 0, posSum= 0, negSum= 0;
	short int max= SHRT_MIN, min= SHRT_MAX;
	unsigned short int evenValues= 0, oddValues= 0, posValues= 0, negValues= 0, maxIndex, minIndex, aboveAvg= 0, belowAvg= 0, onAvg= 0;
	float avg;

	for(unsigned short int i= 0; i<size; i++) {
		//Maximum
		if(array[i]>max) {
			max= array[i];
			maxIndex= i;
		}

		//Minimum
		if(array[i]<min) {
			min= array[i];
			minIndex= i;
		}

		//Even or odd
		if(array[i]%2 == 0) {
			evenSum+=array[i];
			evenValues++;
		} else {
			oddSum+=array[i];
			oddValues++;
		}

		//Positive or negative
		if(array[i]>0) {
			posSum+=array[i];
			posValues++;
		} else {
			negSum+=array[i];
			negValues++;
		}

		//Sum (every value)
		sum+=array[i];
	}

	avg= sum/size;

	for(unsigned short int i= 0; i<size; i++) {
		//Above the average
		if(array[i]>avg) {
			aboveAvg++;

		//Below the average
		} else if (array[i]<avg) {
			belowAvg++;

		//Equals the average
		} else {
			onAvg++;
		}
	}

	//Printing data
	cout << endl << "Sum= " << sum << endl;
	cout << "Average= " << avg << endl;

	if(evenValues>0) {
		cout << endl << "Even values sum= " << evenSum << endl;
		cout << "Even values average= " << evenSum/evenValues << endl;
	}
	
	if(oddValues>0) {
		cout << endl << "Odd values sum= " << oddSum << endl;
		cout << "Odd values average= " << oddSum/oddValues << endl;
	}
	
	if(posValues>0) {
		cout << endl << "Positive values sum= " << posSum << endl;
		cout << "Positive values average= " << posSum/posValues << endl;
	}
	
	if(negValues>0) {
		cout << endl << "Negative values sum= " << negSum << endl;
		cout << "Negative values average= " << negSum/negValues << endl;
	}
	
	cout << endl << "Maximum= " << max << " - Position: " << maxIndex+1 << endl;
	cout << "Minimum= " << min << " - Position: " << minIndex+1 << endl;

	cout << endl << "Values above the average= " << aboveAvg << endl;
	cout << "Values below the average= " << belowAvg << endl;
	cout << "Values equal to the average= " << onAvg << endl;

	menu(array, size);
}



//Reversing function
void reverse(short int array[], unsigned short int size) {
	short int reversedArray[SIZE];
	unsigned short int oldArrayIndex= size-1;

	cout << endl << "You are gonna get a reversed array, your array is not affected." << endl;

	for(unsigned short int i= 0; i<size; i++) {
		reversedArray[i]= array[oldArrayIndex];
		oldArrayIndex--;
	}

	cout << endl << "Here we are:" << endl << endl;
	print(reversedArray, size, false);

	menu(array, size);
}



//Sorting function
void sort(short int array[], unsigned short int size) {
    short int tmp;

    cout << endl << "Your array is gonna be sorted." << endl;

    //Sorting (fixed loops)
    for(unsigned short int i= 0; i<size-1; i++) {
        for(unsigned short j= i+1; j<size; j++) {
            if(array[i]>array[j]) {
                tmp= array[i];
                array[i]= array[j];
                array[j]= tmp;
            }
        }
    }

    cout << endl << "Here we are:" << endl << endl;
    print(array, size, true);
}



//Printing function
void print(short int array[], unsigned short int size, bool fromMainArray) {
	for(unsigned short int i= 0; i<size; i++) {
		cout << i+1 << ") " << array[i] << endl;
	}

	if(fromMainArray) {
		menu(array, size);
	}
}
