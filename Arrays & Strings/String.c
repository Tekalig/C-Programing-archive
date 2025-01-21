#include <stdio.h>

#include <string.h>

int main ()
{
	//char string[] = "my name is tekalign mesfin";
	char string[64];
	
	printf("instraction ");
	//the fgets function store the newline character
	fgets(string, 64, stdin);
	// the string length counts the newline character in the input 
	int len = strlen(string);
	size_t num = strlen(string);
	//int x = strlen("slnsjj");
	
	printf("you type %d character\n", len);
	printf("you type %ld character\n", num);
	// string concatination 
	
	char first[] = "I am the first, ";
	
	char second[] = "I am the second";
	
	char store[64];
	//strcpy function copy the value of string one to the other string 
	strcpy(store,first);//you can use the strcpy(first, second, n) method to copy n number of character
	//strcat function concat the second string to to the first one
	strcat(store, second);
	
	printf("%s\n", store);
	
	// strcmp function compere to string value than if they are equal it return 0 else return 1
	//I use the newline character b/c of the fgets function 
	if(strcmp(string, "besu\n") == 0)
	{
		printf("access is granted\n");
	}else
	{
		printf("invalid password\n");
	}
	//strstr function is function that do check the value is substring in the given string if the string found return pointer else it return Null
	char str1[] = "am";
	if (strstr(first, str1) == NULL)
	{
		printf("the string is not found\n");
	}else
	{
		printf("the string is found in the superstring\n");
	}
	
	return 0;
}

