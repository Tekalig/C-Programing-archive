#include <stdio.h>
#include <stdlib.h>

struct wet {
	      char day[10];
	      float temp;
	};
void B_sort(struct wet *w);

int main (int argc, char *argv[])
{
	
	struct wet week[7] = {
		{"sunday", 31.3},
		{"monday", 37.2},
		{"tuesday",10.6},
		{"wednesday", 15.4},
		{"thursday", 44.8},
		{"friday", 1.1},
		{"saturday", 37.9}
	};
	B_sort(week);
	
	for (int i = 0; i < 7; i++) {
		printf("for %s the Tempreture is %.2f\n", week[i].day, week[i].temp);
	}
	return 0;
}

void B_sort(struct wet *w){
	struct wet tem;
	for (int i = 0; i < 7; i++) {
		
		for (int x = i+1; x < 7; x++) {
			if (w[i].temp > w[x].temp)
			{
				tem = w[x];
				w[x] = w[i];
				w[i] = tem;
			}
		}
	}
}

