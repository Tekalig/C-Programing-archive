#include <stdio.h>

int main(){
	
	char letter = 'A';
	do {
	
		printf("%c ", letter);
		letter++; 
		
	}while(letter != 'Z' + 1);
	
	printf("\n");
	return 0;
}
