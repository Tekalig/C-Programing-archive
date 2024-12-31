#include <stdio.h>

int main(){

	int a = 1;
	int i = 1;
	
	while(a < 100){
		a = 10 * i++;
		printf("%d ", a);
	}
	printf("\n");
	return 0;
}
	
