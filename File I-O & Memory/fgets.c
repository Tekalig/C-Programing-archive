#include <stdio.h>

int main ()
{
	char word[64];
	
	printf("enter your sentence\n");
	
	fgets(word, 64, stdin);
	
	printf("%s\n", word);
	return 0;
}


