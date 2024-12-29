#include <stdio.h>

int main(){

	float a;
	
	//printf("Hi %d\n", a);
	
	printf("the storage used by this variable is %lu bytes\n", sizeof(a));//it return the storage used by the int variable
	printf("the location %p\n", &a); // & oprater tell you that get the address of the variable
	return 0;
}
