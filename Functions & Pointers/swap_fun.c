#include <stdio.h>

void swap(int *num1, int *num2);

int main ()
{
	int x,y;
	
	printf("The values before the swap function : ");
	
	scanf("%5d %5d", &x, &y);
	
	swap(&x,&y);
	
	printf("after the swap fuction %d %d\n",x ,y);
	
	return 0;
}

void swap(int *num1, int *num2){
	
	int tem = *num2;
	
	*num2 = *num1;
	
	*num1= tem;
	
	//printf("The values after the swap function :  %2d %2d\n", *num1, *num2);
	
} 
	
