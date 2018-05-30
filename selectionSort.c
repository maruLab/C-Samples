#include <stdio.h>

void selection_sort(int length, int *data);
void printArray(int length, int *data);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	printArray(length, data);
	selection_sort(length, data);
}
void selection_sort(int length, int *data) {
	int min;
	int tmp;
	for (int i = 0; i < length - 1; i++) {
		min = i;
		for (int j = i + 1; j < length; j++) {
			if (data[min] > data[j]) {
				min = j;
			}
		}
		tmp = data[i];
		data[i] = data[min];
		data[min] = tmp;
		printArray(length, data);
	}
}
void printArray(int length, int *data) {
	for (int i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
