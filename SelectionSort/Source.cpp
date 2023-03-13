#include <stdio.h>

int swap(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
	return a, b;
}

void selectionSort(int arr[], int size) {
	for (int j = 0; j < size - 1; j++) {
		int iMin = j;

		for (int i = j + 1; i < size; i++) {
			if (arr[i] < arr[iMin]) {
				iMin = i;
			}
		}
		if (iMin != j) {
			swap(arr[j], arr[iMin]);
		}
	}
}

void printSortedVector(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main() {
	const int size = 7;
	int arr[size] = {2, 8, 5, 3, 9, 4, 1};

	printf("Selection sort:\n");

	selectionSort(arr, size);

	printSortedVector(arr, size);

	return 0;
}