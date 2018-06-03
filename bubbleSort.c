#include <stdio.h>

void bubbleSort(int length, int *data);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	for (int k = 0; k < length; k++) {
		printf("%d ", data[k]);
	}
	printf("\n");
	bubbleSort(length, data);
}
void bubbleSort(int length, int *data) {
	int tmp;
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (data[j] > data[j + 1]) {
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
		for (int k = 0; k < length; k++) {
			printf("%d ", data[k]);
		}
		printf("\n");
	}
}
