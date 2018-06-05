#include <stdio.h>

void heapSort(int *data, int length);
void downHeap(int *data, int length, int idx);
void swap(int *i, int *j);
void printArray(int *data, int length);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	printArray(data, length);
	heapSort(data, length);
}
void heapSort(int *data, int length) {
	for (int i = (length / 2) - 1; 0 <= i; i--) {
		downHeap(data, length, i);
	}
	for (int i = length - 1; 0 < i; i--) {
		swap(&data[0], &data[i]);
		downHeap(data, i, 0);
		printArray(data, length);
	}
}
void downHeap(int *data, int length, int idx) {
	int i, j, tmp;
	i = idx;
	j = i * 2 + 1;
	if (j < length) {
		if (j < length - 1 && data[j] < data[j + 1]) {
			j++;
		}
		if (data[i] < data[j]) {
			swap(&data[i], &data[j]);
		}
		//printArray(data, length);
		downHeap(data, length, j);
	}
}
void swap(int *i, int *j) {
	int tmp = *i;
	*i = *j;
	*j = tmp;
}
void printArray(int *data, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
