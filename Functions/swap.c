#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("Main a and b are %d %d\n",a,b);
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("Fn a and b are %d %d\n",*a,*b);
}



















