#include<stdio.h>
void f();
void f()
{
	static int count=0;
	count++;
	printf("Address is %p \tvalue of count is %d\n",&count,count);
}
void main()
{
	extern int a;
	a=5;
	//f();
	f1();
}






