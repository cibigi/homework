/*
Christian Battista Giannarelli
3^ B INF, 2020-03-19

Sum, multiplication, sum of even values and sum of values in an odd position in an array
*/

#include <iostream>

//Fixed array size
#define LENGHT 10

using namespace std;

//Prototypes (upload and operations)
void upload(short int[], unsigned short int);
int sum(short int[], unsigned short int);
long long int mul(short int[], unsigned short int);
int evenSum(short int[], unsigned short int);
int oddPosSum(short int[], unsigned short int);

int main() {
    //Array
    short int array[LENGHT];

    //Actual array lenght
    unsigned short int myLenght;
    do {
        cout << "How many values? Max= " << LENGHT <<  endl;
        cin >> myLenght;
    } while(myLenght<2 || myLenght>LENGHT);

    //Array uploading
    upload(array, myLenght);

    //Operations, getting and printing results
    cout << endl << "Sum= " << sum(array, myLenght) << endl;
    cout << "Multiplication= " << mul(array, myLenght) << endl;
    cout << "Sum of even values= " << evenSum(array, myLenght) << endl;
    cout << "Sum of values in an odd position= " << oddPosSum(array, myLenght) << endl;

    return 0;
}

//Uploading values to the array
void upload(short int array[], unsigned short int lenght) {
    cout << endl;

    for(unsigned short int i= 0; i<lenght; i++) {
        cout << "Type value " << i << endl;
        cin >> array[i];
    }
}

//Sum
int sum(short int array[], unsigned short int lenght) {
    int sum= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        sum+=array[i];
    }

    return sum;
}

//Multiplication
long long int mul(short int array[], unsigned short int lenght) {
    int mul= 1;
    for(unsigned short int i= 0; i<lenght; i++) {
        mul*=array[i];
    }

    return mul;
}

//Sum, even numbers
int evenSum(short int array[], unsigned short int lenght) {
    int sum= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        if(array[i]%2 == 0) {
            sum+=array[i];
        }
    }

    return sum;
}

//Sum, numbers in an odd position (in the array)
int oddPosSum(short int array[], unsigned short int lenght) {
    int sum= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        if(i%2 != 0) {
            sum+=array[i];
        }
    }

    return sum;
}