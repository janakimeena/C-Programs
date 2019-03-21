#include<stdio.h>
int fact(int*);
void main()
{
	int n,isogram;
	scanf("%d",&n);
	isogram = fact(&n);
	printf("Number of isogram words with n as %d is %d",n,isogram);
}
int fact(int *n)
{
	int i, ans=1;
	*n=10;
	for(i=1;i<=*n;i++)
	ans*=i;
	return ans;
}




