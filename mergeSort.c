#include <stdio.h>

void mergeSort(int length, int *data);
void printArray(int length, int *data);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	printArray(length, data);
	mergeSort(length, data);
}
void mergeSort(int length, int *data) {
	if (length < 2)
		return;
	int half = (int) (length / 2);
	mergeSort(half, data);
	mergeSort(length - half, &data[half]);
	int tmp[length];
	int i = 0;
	int j = half;
	int k = 0;
	while (i < half || j < length) {
		if ((i < half && data[i] < data[j]) || j == length) {
			tmp[k] = data[i];
			i++;
		} else {
			tmp[k] = data[j];
			j++;
		}
		k++;
	}
	for (int i = 0; i < length; i++) {
		data[i] = tmp[i];
	}
	printArray(length, data);
}
void printArray(int length, int *data) {
	for (int i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
