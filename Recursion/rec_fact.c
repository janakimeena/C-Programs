#include<stdio.h>
long int factorial(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return (n*factorial(n-1));
}
void main()
{
	int n;
	long int f;
	scanf("%d",&n);
	f = factorial(n);
	printf("%ld\n",f);
}




