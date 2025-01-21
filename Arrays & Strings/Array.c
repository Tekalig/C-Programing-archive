#include <stdio.h>

int main ()
{
	float tamp[] = {4.3, 5.6, 7.4, 5.4};

	for (int i = 0; i < 4; i += 1)
	{
		printf("Day%d : %.2f\n", i, tamp[i]);
	}
 	// multidimensional Array is an array that that have two dimension they reflect the value of array

 	int cole[][3] = {{2,3,4}, {5,6,7},{12,34,56}};

 	for (int x = 0;  x < 3;  x += 1)
 	{
		//printf("the value of row in cole : %ls\n", *p);
		int *p = cole[x];

 		for (int y = 0; y < 3; y += 1)
 		{
 			printf("the value of column in cole : %d\n", (*p+y));
 		}
 	}
	// in this array  the columns must have the larges value in the array

	char string[2][4] = {"hazi", "besu"};

	printf("%c\n", string[0][3]);

	return 0;
}

