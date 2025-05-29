#include <stdio.h>

int reversed(int num);

int main (int argc, char *argv[])
{
	int num;
	printf("Type positive number => ");
	scanf("%d", &num);
	
	if (reversed(num) == num)
	{
		printf("it is palindrom number \n");
		
	}else
	{
		printf("it is not a palindrom number \n");
	}
	
	return 0;
}

int reversed(int num) {
	
	int rever = 0;
	while (num)
	{
		rever *= 10;
		rever += num%10;
		num/=10;
	}
	
	return rever;
}
