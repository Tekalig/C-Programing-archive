#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 15

void change(char *str);																	
																
int main (int argc, char *argv[])
{		
	char str[SIZE];
	
	printf("type some text in the screen => ");
	fgets(str, SIZE, stdin);
	
	change(str);
	printf("after the function change => %s\n",str);						
							
	return 0;
}

void change(char *str){
	
	for (int i = 0; i < strlen(str); i++){                             // while (*str){								 							 
		
		str[i] = toupper(str[i]);									  //    *str = toupper(*str);
		if (str[i] == ' ') str[i] = '_';							  //    if(*str == ' ') *str = '_';			
																	 //      str++;
	}
}																
/*int compare(const void *a, const void *b);	
char string[SIZE];
fgets(string, SIZE, stdin);																
printf("unsorted string : \n%s",string);
																		
qsort(string, strlen(string), sizeof(char), compare);
																		
printf("sorted string : %s\n", string);

int compare(const void *a, const void *b){
																			
return *(char *)a - *(char *)b;
}*/

