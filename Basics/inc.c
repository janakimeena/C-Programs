#include<stdio.h>
void main()
{
	int a, b, c;
	b= 6;
	a = 5;
//	scanf("%d",&a);
	//c = ++a + b++;
	c = ++a + ++a;
	printf("%d\t%d\n",a,c);
}
