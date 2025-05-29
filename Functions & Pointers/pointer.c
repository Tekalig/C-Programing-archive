#include <stdio.h>
#include <string.h>

int main ()
{
	int x = 3;
	//pointer must be initialized before used
	int *p = &x;
	printf("the address of the x variable %p\n",p);
	// arrays are like pointers in on hand
	int arry[] = {3, 4, 5, 6};
	
	int *arr = arry;//the array and string name it self is an address
	/*arr = arr+2;
	*arr = 3;
	arr = arr-2; => to change the value array using the pointer*/
	// the above form in short way is *(arr+2) = 3 
	for (int i = 0; i < 4; i += 1)
	{
		printf("the value in the array %p : %d\n", arr, *arr);
		arr++;
	}
	
	char *string = "the best ide all of the time\n";
	
	for (int i = 0; i < strlen(string); i++) {
		printf("%c", *(string+i));
	}
	
	while (putchar(*string++));//as you see the *string++ increment the memory address
	//while (putchar(++*s++));     at this time it increment both the the memory address and the value of string 
	return 0;
}
