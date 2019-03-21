#include<stdio.h>
int main()
{
	int* a;
	int b=5;
	a = &b;
	printf("%p\t%p",a,a+1);	
//	*a = *a+1;
}




