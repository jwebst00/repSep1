#include <stdio.h>

#define SIZE 10

/* Function Prototype */
void loadArray(int array[], int size);

int main(int argc, char *argv[]) {
	int numbers[SIZE];
	
	loadArray(numbers,SIZE);

	int index;

	for(index=0;index<SIZE;index++) {
		printf("%d\n", numbers[index]);
	}

}

void loadArray(int array[], int size) {
	int index;

	for(index=0;index<size;index++) {
		array[index] = index*100;
	}
}
