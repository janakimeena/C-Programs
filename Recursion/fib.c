#include<stdio.h>
int fibanocci(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibanocci(n-1)+fibanocci(n-2);
}
void main()
{
	int n;
	int f;
	scanf("%d",&n);
	f = fibanocci(n);
	printf("%d\n",f);
}
