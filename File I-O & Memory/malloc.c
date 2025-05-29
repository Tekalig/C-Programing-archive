#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main ()
{
	char *man;
	// as you see below type casting is used for ponter 
	man =(char *)malloc(sizeof(char)*SIZE);

	if (man == NULL)
	{
		puts("Memory error");
	}else
	{
		printf("the %d bytes of memory is allocated at %p\n",SIZE, man); 
		printf("type someting : ");
		fgets(man, SIZE, stdin);
		printf("you type this \n%s\n",man);
	}
	// 
	struct date {
	      int month;
	      int day;
	      int year;
	};
	
	struct date *ber;
	ber = (struct date *)malloc(sizeof(struct date));
	
	if (ber == NULL)
	{
		printf("Memory error\n");
	}else
	{
		printf("please enter your birth year : ");
		scanf("%d",&ber->year);
		printf("please enter your birth month : ");
		scanf("%d",&ber->month);
		printf("please enter your birth day : ");
		scanf("%d",&ber->day);
		printf("your birth date is %02d/%02d/%d \n", ber->day, ber->month, ber->year);
	}
	return 0;
} 
