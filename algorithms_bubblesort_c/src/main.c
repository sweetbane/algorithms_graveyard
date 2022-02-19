#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int* intArray, int arraySize);
void swapInt(int* int1, int* int2);

int main()
{
	int testArray[] = {5, 26, 2, 32, 12, 23, 99, 1666, 2, 44};

	int arraySize = sizeof(testArray)/sizeof(*testArray);

	bubbleSort(testArray, arraySize);

	int i;
	for(i = 0; i < arraySize; i++){
		printf("%d", testArray[i]);
		if(i != arraySize - 1){
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

void bubbleSort(int* intArray, int arraySize){
	int i, j;
	int *arrayPtr = intArray;
	for(i = 0; i < arraySize; i++){
		bool swapBool = false;
		for(j = 0; j < arraySize - 1; j ++){
			if(*(arrayPtr + j) > *(arrayPtr + j + 1))
				swapInt(arrayPtr + j, arrayPtr +j + 1);
				swapBool = true;
		}
		if(swapBool == false)
			return;
	}
	return;
}

void swapInt(int* int1, int* int2){
	int tempInt;
	tempInt = *int1;
	*int1 = *int2;
	*int2 = tempInt;
}