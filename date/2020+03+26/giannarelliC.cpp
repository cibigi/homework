/*
    Christian Battista Giannarelli
    3 B INF - 2020/03/26

    Average: first array, second array, both
*/

#include <iostream>

//Array fixed size
#define SIZE 20

using namespace std;

//Protypes
void upload(int[], unsigned short int);
void avg(int[], unsigned short int, int[], unsigned short int);

int main() {
    //Arrays
    int arr[SIZE], arr1[SIZE];

    //Sizes
    unsigned short int arrSize, arrSize1;

    //Sizes assignment
    do {
        do {
            cout << "First array lenght:" << endl;
            cin >> arrSize;
        } while(arrSize<2 || arrSize>SIZE);

        do {
            cout << "Second array lenght:" << endl;
            cin >> arrSize1;
        } while(arrSize1<2 || arrSize1>SIZE);
    } while(arrSize == arrSize1);

    //First array upload
    cout << endl << "First array values ->" << endl;
    upload(arr, arrSize);

    //Second array upload
    cout << endl << "Second array values ->" << endl;
    upload(arr1, arrSize1);

    //Average (first array, second array, both)
    avg(arr, arrSize, arr1, arrSize1);

    return 0;
}

//Upload function
void upload(int arr[], unsigned short int size) {
    for(unsigned short int i= 0; i<size; i++) {
        cout << "Value " << i+1 << endl;
        cin >> arr[i];
    }
}

//Average function
void avg(int arr[], unsigned short int size, int arr1[], unsigned short int size1) {
    //Variables (sum)
    long int sum= 0, sum1= 0;

    //First array
    for(unsigned short int i= 0; i<size; i++) {
        sum+=arr[i];
    }
    cout << endl << "First array sum= " << sum << endl;
    cout << "First array average= " << (float)sum/size << endl;

    //Second array
    for(unsigned short int i= 0; i<size1; i++) {
        sum1+=arr1[i];
    }
    cout << endl << "Second array sum= " << sum1 << endl;
    cout << "Second array average= " << (float)sum1/size1 << endl;

    //Both
    cout << endl << "Sum (both)= " << sum+sum1 << endl;
    cout << "Average (both)= " << (sum+sum1)/(size+size1) << endl;
}