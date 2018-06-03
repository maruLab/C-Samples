#include <stdio.h>

void shellSort(int length, int *data);
void printArray(int length, int *data);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	printArray(length, data);
	shellSort(length, data);
}
void shellSort(int length, int *data) {
	int h;
	for (h = 1; h < length / 9; h = h * 3 + 1)
		;
	int j;
	int tmp;
	for (; 0 < h; h /= 3) {
		//printf("%d \n", h);
		for (int i = h; i < length; i++) {
			j = i;
			while (h <= j && data[j] < data[j - h]) {
				tmp = data[j];
				data[j] = data[j - h];
				data[j - h] = tmp;
				j -= h;
			}
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
