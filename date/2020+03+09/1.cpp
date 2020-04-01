/*
Christian Battista Giannarelli - Monday, March 9th - 3rd BINF
Shifting to the left the array content
*/

#include <iostream>

//Defining the max lenght of the array
#define MAX_LENGHT 100

using namespace std;

//Prototypes: uploading the array content, shifting array content to the left, printing the array
void upload(int[], unsigned short int);
void shiftLeft(int[], unsigned short int);
void printArray(int[], unsigned short int);

int main() {
    //Array (size: defined maximum lenght)
    int array[MAX_LENGHT];

    //Actual lenght (variable and assignment)
    unsigned short int actualLenght;
    do {
        cout << "Type actual array lenght: ";
        cin >> actualLenght;
    } while(actualLenght<=1 || actualLenght>MAX_LENGHT);

    //Uploading
    upload(array, actualLenght);

    //Printing (original array)
    printArray(array, actualLenght);

    //Array shifting
    shiftLeft(array, actualLenght);

    //Printing (shifted array)
    printArray(array, actualLenght);

    return 0;
}

//Array uploading function
void upload(int array[], unsigned short int lenght) {
    //Assignment loop
    for(unsigned short int i=0; i<lenght; i++) {
        cout << endl << "Value " << i+1 << ": ";
        cin >> array[i];
    }
}

//Array shifting function
void shiftLeft(int array[], unsigned short int lenght) {
    //Shifting loop
    for(unsigned short int i=0; i<lenght; i++) {
        array[i]= array[i+1];
    }

    //Last item
    array[lenght-1]= 0;
}

//Array printing function
void printArray(int array[], unsigned short int lenght) {
    cout << endl << endl;

    //Printing loop
    for(unsigned short int i=0; i<lenght; i++) {
        cout << i+1 << ") " << array[i] << endl;
    }
}