#include <stdio.h>
#include <string.h>

int main ()
{
	struct record {
		char name[20];
		int age;
		float length;
	};
	
	struct record my_pro;
	// we can't use the string explictly b/c string is an array so
	//error to use the form => my_pro.name = "besu mesi" the correct form is : =>
	strcpy(my_pro.name, "besu mesi");
	my_pro.age = 21;
	my_pro.length = 1.68;
	
	printf("my name is %s, age is %d and tall is %.2f \n",my_pro.name, my_pro.age, my_pro.length);
	
	// another form of creating struct variable 
	
	struct record person1 = {
		"tekalign mesfin",
		21,
		1.78
	};
	
	printf("my name is %s, age is %d and tall is %.2f \n", person1.name, person1.age, person1.length);
	// nested struct 
	struct date {
		int year;
		int mounth;
		int day;
	};
	// you can create variable at the end of the struct difintion
	
	struct person {
		char code[32];
		struct date br;
	} fr;
	
	//struct person fr;
	strcpy(fr.code, "UGR/7226/13");
	fr.br.year = 2023;
	fr.br.mounth = 6;
	fr.br.day = 22;
	
	printf("you are born %d/%d/%d\n",fr.br.year = 2023, fr.br.mounth = 6, fr.br.day = 22); 
	
	return 0;
}
