#include <stdio.h>

void print(void);

int main(){

	printf("hi: void function\n");
	print();
	print();
	return 0;
}

void print(void){
	static int x = 0;
	printf("Hi : main function 'x'= %d\n", x);
	x++;
}
