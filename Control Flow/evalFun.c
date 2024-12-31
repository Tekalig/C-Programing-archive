#include <stdio.h>

void eval(int num);

int main(){
	
	int num;
	
	printf("type Integer in the screen : ");
	scanf("%d", &num);
	
	eval(num);
	
	return 0;	
}

void eval(int num){
	
	if(num > 10)
	{
		printf("%d > 10\n", num);
	}else if (num == 10)
	{
		printf("%d == 10\n", num);
	}else
	{
		printf("%d < 10\n", num);
	}
}


