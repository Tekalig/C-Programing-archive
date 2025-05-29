#include <stdio.h>
#include <stdlib.h>

struct stats {
      int account;
      float balance;
      struct stats *next;
};
// create function that allocet memory address for struct
struct stats *create(void);

void fill_struct(struct stats *s);

int main ()
{
	struct stats *first;
	struct stats *current;
	struct stats *new;
	//create the first pointer struct
	//first = create();
	//current = first;
	for (int i = 0; i < 5; i += 1)
	{
		if (i==0)
		{
			first = create();
			current = first;
		}else
		{
			new = create();
			current->next = new;
			current = new;
		}
		
		fill_struct(current);
	}
	//bellow mark as the end of the linkedlist
	current->next = NULL;
	
	current = first;
	while (current)
	{
		printf("Account : %05d,\t$%.2f\n",current->account, current->balance);
		current = current->next;
	}
	
	return 0;
}

struct stats *create(void){
	struct stats *baby;
	baby = (struct stats *)malloc(sizeof(struct stats));
	if (baby == NULL)
	{
		printf("memory error\n");
		exit(1);
	}
	
	return baby;
}

void fill_struct(struct stats *s){
	printf("Account number : ");
	scanf("%d", &s->account);
	printf("Balance :$");
	scanf("%f", &s->balance);
	s->next = NULL;
}
