#include <iostream>
#define LENGHT 100
using namespace std;

void upload(int[], unsigned short int);
int sum(int[], unsigned short int);
unsigned long long int mul(int[], unsigned short int);
int evenSum(int[], unsigned short int);
int oddPosSum(int[], unsigned short int);

int main() {
    int array[LENGHT];
    unsigned short int myLenght;
    do {
        cout << "How many values?" << endl;
        cin >> myLenght;
    } while(myLenght<2 || myLenght>LENGHT);

    upload(array, myLenght);

    cout << endl << "Sum= " << sum(array, myLenght) << endl;
    cout << "Multiplication= " << mul(array, myLenght) << endl;
    cout << "Sum of even values=" << evenSum(array, myLenght) << endl;
    cout << "Sum of values in an odd position= " << oddPosSum(array, myLenght) << endl;


    return 0;
}

void upload(int array[], unsigned short int lenght) {
    for(unsigned short int i= 0; i<lenght; i++) {
        cout << "Type value " << i+1 << endl;
        cin >> array[i];
    }
}

int sum(int array[], unsigned short int lenght) {
    int sum= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        sum+=array[i];
    }

    return sum;
}

__int128 mul(int array[], unsigned short int lenght) {
    int mul= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        mul*=array[i];
    }

    return mul;
}

int evenSum(int array[], unsigned short int lenght) {
    int sum= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        if(array[i]%2 == 0) {
            sum+=array[i];
        }
    }

    return sum;
}

int oddPosSum(int array[], unsigned short int lenght) {
    int sum= 0;
    for(unsigned short int i= 0; i<lenght; i++) {
        if(i%2 != 0) {
            sum+=array[i];
        }
    }

    return sum;
}