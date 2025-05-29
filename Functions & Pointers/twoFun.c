#include <stdio.h>

float volume(float h, float w, float l);

float Area(float w, float l);
int main ()
{
	float h, w, l;
	
	printf("Type the value of 'H', 'W' and 'L'for the 3D objecte : ");
	
	scanf("%f %f %f", &h, &w, &l);
	
	printf("The volume of 3D object is %f\n", volume(h, w, l));
	
	printf("the Area for the 3D objecte is %f\n", Area(w, l));
	
	return 0;
}

float volume(float h, float w, float l)
{
	//float Area(float w, float l);
	
	return h*w*l;
}

float Area(float w, float l)
{
	return w*l;
}
