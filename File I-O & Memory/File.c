#include <stdio.h>

int main (int argc, char *argv[])
{
	int i=0;
	int x=0;
	FILE* fp = fopen("/home/besu/Documents/logic/x.txt","r");
	fscanf(fp,"%d %d\n",&i,&x);
	printf("i=%d, x=%d\n",i, x);
	fp = fopen("/home/besu/Documents/logic/x.txt","w");
	fprintf(fp,"i=%d, x=%d\n",i,x);
	
	return 0;
}
