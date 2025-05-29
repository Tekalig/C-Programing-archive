#include <stdio.h>

int main ()
{
	char *gang[4] = {
		"hazi",
		"besu",
		"masf",
		"tefr"
	};
	char **p = gang;
	// change into %s it print the value or %p it print the address
	for (int i = 0; i < 4; i += 1)
	{
		printf("the value of gang : %s\n", *p);
		for (int x = 0; x < 4; x++) {
		    
			printf("the sub-value of gang : %c\n", *((*p)+x));
		}
		p++;
	}
	return 0;
}

