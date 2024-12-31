#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand((unsigned)time(NULL));
	int x = 0;
	
	while(x < 10){
	
		int r = rand();
		printf("The Loop is guess theis number : %2d\n", r % 100);
		x++;
		}
	return 0;
}
		
		
