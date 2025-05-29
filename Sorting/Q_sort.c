#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int compare(const void *a, const void *b);

int main ()
{
	int arr[SIZE];
	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() %100+1;
	}
	printf("the unsorted array value\n");
	for (int x = 0; x < SIZE; x++)
	{
		printf("%3d ", arr[x]);
	}
	putchar('\n');
	// sort the array 
	qsort(arr, SIZE, sizeof(int), compare);

	printf("the sorted array value\n");
	for (int y = 0; y < SIZE; y++)
	{
		printf("%3d ", arr[y]);
	}
	putchar('\n');

	return 0;
}

int compare(const void *a, const void *b){

	return *(int *)a - *(int *)b;
}
