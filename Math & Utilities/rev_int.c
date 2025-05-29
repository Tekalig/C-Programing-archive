#include <stdio.h>

int reversedint(int num, int base);
int binary(int n);

int main (int argc, char *argv[])
{
	int num, base;
	printf("enter positive integer number => ");
	scanf("%d", &num);
	
	printf("enter the base of the number => ");
	scanf("%d", &base);

	printf("reversed number is %d\n", reversedint(num, base));
	
	printf("binary number => %d\n", binary(num)); 
	return 0;
}

int reversedint(int num, int base) {

  int result = 0;
  while (num)
  {
  	 	result *=10;
  	 	result += num%base;
  	 	num/=base;  
  }
  
  return result;
}

int binary(int n) {
	
	int last = 1;
	if (!(n%2)) {
		last = 0;
		n += 1;
	}
	
	return reversedint(reversedint(n,2),10) - (1-last);
}
