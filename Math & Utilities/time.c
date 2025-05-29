#include <stdio.h>
#include <time.h>

int main ()
{
	// to create the time variable you must have use thr time_t 
	time_t now;
	struct tm *right_now;//it is just a pointer 
	
	time(&now);
	right_now = localtime(&now);
	
	printf("P1 => can you tell me the time?\n");
	printf("P2 => yes i can it is : %ld\n", time(NULL));
	printf("P1 => what is this man it is deficalte to read bro.\n");
	//to make the time is readable you can use the ctime function 
	printf("P2 => this one is the correct form : %s\n", ctime(&now));
	// let as make the out put more atrractive
	// time in the c program the month start counthig from the 0 number
	printf("Today is %d/%d at %d:%02d\n", // i use the 02 in the %d placeholder b/c when the min is less than 10 it add zero and 
			right_now->tm_mon+1,			// hold two space value for it
			right_now->tm_mday,
			right_now->tm_hour,
			right_now->tm_min);
			
	return 0;
}


