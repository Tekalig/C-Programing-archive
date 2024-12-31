#include <stdio.h>

int main()
{	
	int a;
	printf("Type Integer in the Console : ");
	scanf("%d", &a);
	
	printf("the value you type is %d\n", a);
	
	if (a > 10)
	{
		printf("'%d' is greater than 10\n", a);
		printf("Good bye\n");
	}else {
		printf("%d is less then or equal to 10\n", a);
	}
	return 0;

}
