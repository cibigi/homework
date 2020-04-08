/*
Christian Battista Giannarelli
2020-04-03 3 BINF

Array: average, maximum value, minimum value, value quest
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

//Prototypes
void menu(short[]);
size_t setSize(void);
void upload(short[], size_t);
void notUploaded(short[], size_t);
float avg(short[], size_t);
short getMax(short[], size_t);
short getMin(short[], size_t);
unsigned short find(short[], size_t, short);

//Array fixed size
const size_t SIZE= 100;

//Array upload status
bool uploaded= false;

int main() {
	//Array
	short arr[SIZE];

	//Menu
	menu(arr);

	return 0;
}

//Menu function
void menu(short arr[]) {
	//Actual array size
	size_t size;

	//Repeat flag
	bool repeat= true;

	//Menu loop
	while(repeat) {
		//Operation selector
		unsigned short op;
		do {
			printf("\n- Menu -\n Select an operation:\n 1) Upload array\n 2) Get the average\n 3) Get the maximum value\n 4) Get the minimum value\n 5) Find a value\n 6) Quit\n --> ");
			scanf("%hu", &op);
		} while(op<1 || op>6);

		//Switch of operations
		switch(op) {
			//1) Upload array
			case 1:
				size= setSize();
				upload(arr, size);
			
				break;

			//2) Get the average
			case 2:
				if(uploaded) {
					printf("\nAverage= %f\n", avg(arr, size));
				} else {
					printf("\nUpload your array first!\n");
					size= setSize();
					upload(arr, size);
				}
			
				break;

			//3) Get the maximum value
			case 3:
				if(uploaded) {
					printf("\nMax= %hi\n", getMax(arr, size));
				} else {
					printf("\nUpload your array first!\n");
					size= setSize();
					upload(arr, size);
				}
			
				break;

			//4) Get the minimum value
			case 4:
				if(uploaded) {
					printf("\nMin= %hi\n", getMin(arr, size));
				} else {
					printf("\nUpload your array first!\n");
					size= setSize();
					upload(arr, size);
				}
			
				break;

			//5) Find a value
			case 5:
				if(uploaded) {
					short value;
					printf("\nWhich value should I find?\n --> ");
					scanf("%hi", &value);
					printf("Found: %hu time(s)\n", find(arr, size, value));
				} else {
					printf("\nUpload your array first!\n");
					size= setSize();
					upload(arr, size);
				}
			
				break;

			//6) Quit
			case 6:
				repeat= false;
				break;
		}
	}	
}

//Function: reading array size
size_t setSize(void) {
	unsigned short size;
	do {
		printf("\nArray size? Max= %zu\n --> ", SIZE);
		scanf("%hu", &size);
	} while(size<2 || size>SIZE);

	return size;
}

//Function: uploading the array
void upload(short arr[], size_t size) {
	unsigned short op;
	printf("\nUpload your values...\n");

	//Upload mode
	do {
		printf(" 1) Manual upload\n 2) Random upload\n --> ");
		scanf("%hu", &op);
	} while(op!=1 && op!=2);

	//Manual
	if(op == 1) {
		for(unsigned short i= 0; i<size; i++) {
			printf("Assign value %d\n --> ", i+1);
			scanf("%hi", &arr[i]);
		}

	//Random
	} else {
		srand(time(NULL));
		short max;
		printf("\nMaximum value for random generator?\n --> ");
		scanf("%hi", &max);

		for(unsigned short i= 0; i<size; i++) {
			arr[i]= rand()%max;
			printf("Assigning value %d --> %hi\n", i+1, arr[i]);
		}
	}
	
	uploaded= true;
}

//Function: average
float avg(short arr[], size_t size) {
	int sum= 0;
	for(unsigned short i= 0; i<size; i++) {
		sum+=arr[i];
	}

	return (float)sum/size;
}

//Function: maximum value
short getMax(short arr[], size_t size) {
	short max= SHRT_MIN;
	for(unsigned short i= 0; i<size; i++) {
		if(arr[i]>max) {
			max= arr[i];
		}
	}

	return max;
}

//Function: minimum value
short getMin(short arr[], size_t size) {
	short min= SHRT_MAX;
	for(unsigned short i= 0; i<size; i++) {
		if(arr[i]<min) {
			min= arr[i];
		}
	}

	return min;
}

//Function: value quest
unsigned short find(short arr[], size_t size, short value) {
	unsigned short found= 0;
	for(unsigned short i= 0; i<size; i++) {
		if(arr[i] == value) {
			found++;
		}
	}

	return found;
}