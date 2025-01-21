#include <stdio.h>

#include <ctype.h>

int main ()
{
	int ch = 'a';
	
	printf("The capital and small letter char 'a' is : %c, %c\n", toupper(ch), tolower(ch));
	
	do
	{
		ch = getchar();
		
		if (isalpha(ch) && isupper(ch))
		{
			ch = toupper(ch);
		
			putchar(ch);
		
		}
	}while (ch != '\n');
	
	printf("\n");
	
	return 0;
}


