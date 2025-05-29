#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ID {
       char name[15];
       int age;
};

void fill(struct ID *p);
void show(struct ID *p);

int main (int argc, char *argv[])
{
	struct ID *p1;
	
	p1 = (struct ID *)malloc(sizeof(char));
	
	if (p1 == NULL)
	{
		printf("memory error");
		exit(1);
	}
	
    fill(p1);
	show(p1);
	
	return 0;
}

void fill(struct ID *p){

	printf("Type your name => ");
	scanf("%s", p->name);
	
	printf("Type your age => ");
	scanf("%d", &p->age);
	
}

void show(struct ID *p){
	
	printf("Hi %s you are %d years old\n", p->name, p->age);
}
