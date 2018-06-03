#include <stdio.h>

void insertionSort(int length, int *data);
void printArray(int length, int *data);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	printArray(length, data);
	insertionSort(length, data);
}
void insertionSort(int length, int *data) {
	int j;
	int tmp;
	for (int i = 1; i < length; i++) {
		j = i;
		while (0 < j && data[j] < data[j - 1]) {
			tmp = data[j];
			data[j] = data[j - 1];
			data[j - 1] = tmp;
			j--;
		}
		printArray(length, data);
	}
}
void printArray(int length, int *data) {
	for (int i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
