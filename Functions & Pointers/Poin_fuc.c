#include <stdio.h>
#include <string.h>

char *longer(char *V1, char *V2);
char *rpt(char s);

/*int *prime(void){
	static int pr[5] = {2, 3, 5, 7, 11};
	return pr;
}*/

int main ()
{
	char *string1 = "my name is hazi\n";
	char *string2 = "my name is besufquad\n";
	char s;
	char *result = longer(string1, string2);
	
	printf("the longer char\n%s",result);
	
	scanf("%c", &s);
	printf("%s\n", rpt(s));
	
	return 0;
}

char *longer(char *V1, char *V2){
	
	if (strlen(V1) > strlen(V2))
	{
		return V1;
	}else
	{
		return V2;
	}
}

char *rpt(char s){
	// the static keyword make the str variable  returns address 
	 static char str[16];
	
	for (int i = 0; i < 16; i += 1)
	{
		str[i] = s;
	}
	
	return str;
}
