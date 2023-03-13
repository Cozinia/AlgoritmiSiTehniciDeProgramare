#include <stdio.h>

int main() {

	const int size = 5;
	int arr[size] = { 12, 11, 13, 5, 6 };

	printf("Insertion sort\n\n");
	printf("Initial array:\n");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	int crt, j;
	for (int i = 1; i < size; i++)
	{
		crt = arr[i];
		j = i - 1;
		while ( (j >= 0) && (arr[j] > crt))
		{
			arr[j + 1] = arr[j];
			j = j-1;
			
		}
		arr[j + 1] = crt;
	}

	printf("Sorted array:\n");

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	return 0;
}