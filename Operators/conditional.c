#include<stdio.h>
void main()
{
	int a=9,b=6,c=8;
	/*if(a>b)
	printf("a is greater\n");
	else
	printf("b is greater\n");*/
	/*(a>b)?printf("a is greater\n"):printf("b is greater\n");*/
	(a>b)?(a>c)?printf("a is greater\n"):printf("c is greater\n"):(b>c)?printf("b is greater\n"):printf("c is greater\n");
}















