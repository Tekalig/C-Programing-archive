#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));
	int r = rand();
	printf("%d it is random number\n", r);
	
	return 0;
	}
