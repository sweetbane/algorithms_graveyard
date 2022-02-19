#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertionSort(int* intArray, int arraySize);
void swapInt(int* int1, int* int2);

int main()
{
	int testArray[] = {5, 26, 2, 32, 12, 23, 99, 32, 1666, 2, 44, -69, -420};

	int arraySize = sizeof(testArray)/sizeof(*testArray);

	insertionSort(testArray, arraySize);

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

void insertionSort(int* intArray, int arraySize){
	int j;
	int sortIndex, tempInt;
	int *arrayPtr = intArray;
	bool insertBool;

	for(sortIndex = 1; sortIndex < arraySize; sortIndex++){
		tempInt = *(arrayPtr + sortIndex); // is this really needed?
		insertBool = false;
		for(j = sortIndex - 1; j >= 0 && insertBool == false; j--){
			if(*(arrayPtr + j) > tempInt){
				*(arrayPtr + j + 1) = *(arrayPtr + j);
				if(j == 0){
					*arrayPtr = tempInt;
				}
			}
			else{
				*(arrayPtr + j + 1) = tempInt;
				insertBool = true;
			}
		}
	}
	return;
}

void swapInt(int* int1, int* int2){
	int tempInt;
	tempInt = *int1;
	*int1 = *int2;
	*int2 = tempInt;
}