#include <stdio.h>

int binarySearch(int *data, int val, int low, int high);

int main(void) {
	int data[] = { 1, 3, 4, 7, 8, 11, 13, 16, 20, 21, 27, 31, 34, 37, 51 };
	int length = sizeof(data) / sizeof(data[0]);
	int res = binarySearch(data, 100, 0, length - 1);
	printf("%d\n", res);
}
int binarySearch(int *data, int val, int low, int high) {
	printf("%d %d\n", low, high);
	int middle = (high + low) / 2;
	if (high < low)
		return -1;
	if (val == data[middle]) {
		return middle;
	} else if (val < data[middle]) {
		return binarySearch(data, val, low, middle - 1);
	} else if (data[middle] < val) {
		return binarySearch(data, val, middle + 1, high);
	} else {
		return -1;
	}
}
