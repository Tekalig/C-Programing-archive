#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15

int *boble_sort(int *arr){
	int tem;
	for (int i = 0; i < SIZE; i++)
	{
		for (int x = i+1; x < SIZE; x++)
		{
		// you can change the '>' to '<' operator to make the desending sorted array
			if (arr[i] > arr[x])
			{
				tem = arr[i];
				arr[i] = arr[x];
				arr[x] = tem;
			}
		}
	}
	return arr;
}
int main ()
{
	int arr[SIZE];
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() %100;
	}
	printf("the random array value\n");
	for (int x = 0; x < SIZE; x++)
	{
		printf("%3d ", arr[x]);
	}
	putchar('\n');
	
	int *result = boble_sort(arr);
	
	printf("the sorted array value\n");
	for (int y = 0; y < SIZE; y++)
	{
		printf("%3d ", result[y]);
	}
	putchar('\n');
	return 0;
}

