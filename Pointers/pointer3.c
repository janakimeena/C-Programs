#include<stdio.h>
struct a{
int a;
float b;
double c;
};
void main()
{
	int a[10],n,i,m;
	struct a d;
	struct a *np=&d;
	printf("%p\n",np);
	np++;	
	printf("%p\n",np);
}
