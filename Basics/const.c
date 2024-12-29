#include <stdio.h>
#define VIS 3.0

int main ()
{
	int a, b;
	
	printf("Type to two integer value : ");
	
	scanf("%d %d", &a, &b);
	
	printf("%d/%.1f = %.1f\n", a, VIS , a/VIS);
	
	printf("%d/%.1f = %.1f\n", b, VIS, b/VIS);
	
	return 0;
}
