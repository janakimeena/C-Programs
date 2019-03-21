#include<stdio.h>
int fib(int);
void main()
{
	int n,val;
	scanf("%d",&n);
	val = fib(n);
	printf("%d",val);
}
int fib(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	return(fib(n-1)+fib(n-2));
}










