#include<stdio.h>
float sum(int*,float*);
int main()
{
	int a;
	float b,c;
	scanf("%d%f",&a,&b);
	c = sum(&a,&b);
	printf("%d\t%f",a,c);
}
float sum(int* a,float* b)
{
	float c;
	*a= *a+10;
	c = *a+*b;
	return c;
}













