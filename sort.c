#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Got the sorting algorithm from google searching "array sorting algorithm c", there was a result for stack overflow that I used and modified slightly for descending rather than ascending order.
//Here's the link: stackoverflow.com/questions/3893937/c-array-sorting-tips
int main() {
	int size, temp;
	scanf("%d", &size);
	int *array1 = (int*) malloc(size * sizeof(int));
	int *array2 = (int*) malloc(size * sizeof(int));
	int *array3 = (int*) malloc(size * sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		array1[i] = rand() % 5000 + 1;
		printf("%d\n", array1[i]);
	}
	printf("\n");
		for (int i = 0; i < size; i++) {
			array2[i] = array1[i];
		}
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (array2[j] > array2[j + 1]) {
				temp = array2[j + 1];
				array2[j + 1] = array2[j];
				array2[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", array2[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		array3[i] = array1[i];
	}
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (array3[j] < array3[j + 1]) {
				temp = array3[j + 1];
				array3[j + 1] = array3[j];
				array3[j] = temp;
			}
		}       
	}
	for (int i = 0; i < size; i++) {
		printf("%d\n", array3[i]);
	}
	free(array1);
	free(array2);
	free(array3);
	return 0;
}


