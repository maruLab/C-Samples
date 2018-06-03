#include <stdio.h>

void quick_sort(int *data, int l, int r);
void printArray(int *data, int l, int r);

int main(void) {
	int data[] = { 4, 51, 31, 8, 20, 16, 37, 34, 3, 11, 7, 13, 21, 27, 1 };
	int length = sizeof(data) / sizeof(data[0]);
	quick_sort(data, 0, length - 1);
}
void quick_sort(int *data, int l, int r) {
	printArray(data, l, r);
	if (r <= l) {
		return;
	}
	int i = l - 1;
	int j = r;
	int tmp;
	while (i < j) {
		while (data[++i] < data[r])
			;
		while (i < --j && l <= j && data[r] < data[j])
			;
		//printf("%d %d\n", i, j);
		if (j <= i) {
			break;
		}
		tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
		//printArray(data, l, r);
	}
	tmp = data[i];
	data[i] = data[r];
	data[r] = tmp;
	//printArray(data, l, r);
	quick_sort(data, l, i - 1);
	quick_sort(data, i + 1, r);
	printArray(data, l, r);
}
void printArray(int *data, int l, int r) {
	for (int i = l; i <= r; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
