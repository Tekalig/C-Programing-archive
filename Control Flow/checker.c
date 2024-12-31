#include <stdio.h>

int main (int argc, char *argv[])
{
	for (int i = 0; i < 8; i++) {
		for (int x= 0; x < 8; x++) {
			printf("%c ",((i+x)%2)?'*':'o');
		}
		printf("\n");
	}
	return 0;
}
