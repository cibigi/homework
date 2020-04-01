/*
Christian Battista Giannarelli
2020-03-13, 3 BINF

Sorting an array (fixed loops)
*/

#include <iostream>

//Fixed array lenght
#define LENGHT 100

using namespace std;

//Prototypes: uploading data, printing array, sorting values
void upload(short int[], unsigned short int);
void print(short int[], unsigned short int);
void sort(short int[], unsigned short int);

int main() {
    //Array (fixed lenght)
    short int array[LENGHT];

    //Actual lenght (user input)
    unsigned short int myLenght;
    do {
        cout << "How many values?" << endl;
        cin >> myLenght;
    } while(myLenght<2 || myLenght>LENGHT);

    //Uploading values, printing
    upload(array, myLenght);
    print(array, myLenght);

    //Sorting values, printing
    sort(array, myLenght);
    print(array, myLenght);

    return 0;
}

//Uploading function (array)
void upload(short int array[], unsigned short int myLenght) {
    cout << endl;
    
    //Assignment loop
    for(unsigned short int i= 0; i<myLenght; i++) {
        cout << "Type value " << i+1 << endl;
        cin >> array[i];
    }
}

//Printing function (array)
void print(short int array[], unsigned short int myLenght)  {
    cout << endl;

    //Printing loop
    for(unsigned short int i= 0; i<myLenght; i++) {
        cout << i+1 << ") " << array[i] << endl;
    }
}

//Sorting function (array)
void sort(short int array[], unsigned short int myLenght) {
    //Temp
    short int tmp;

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