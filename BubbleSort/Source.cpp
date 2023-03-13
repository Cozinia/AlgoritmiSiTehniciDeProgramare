#include <stdio.h>

int swap(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;

	return a, b;
}

void BubbleSort(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}

		}
	}
	return;
}

void PrintArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main() {
	const int size = 7;
	int arr[size] = { 2, 8, 5, 3, 9, 4, 1 };
	printf("Bubble sort:\n");
	BubbleSort(arr, size);
	PrintArray(arr, size);
	return 0;
}