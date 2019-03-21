#include<stdio.h>
void main()
{
	int i;
	unsigned int ui;
	float f;
	long int li;
	double d;
	long double d1;
	scanf("%d%u%f%ld%lf%Lf",&i, &ui, &f,&li,&d,&d1);
	printf("The integer is %d\n value of unsinged int is %u \n float is%f\n long int is %ld \n double is %lf \n and long double is %Lf\n",i, ui, f,li,d,d1);
	
}
