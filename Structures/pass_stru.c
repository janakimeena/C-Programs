#include<stdio.h>
struct example
{
 char name[20];
	int m[5];
};
void f(struct example* e)
{
	e->m[0]=5;
}

void main()
{
	struct example e;
	e.m[0]=10;
	f(&e);
	printf("%d",e.m[0]);
}



