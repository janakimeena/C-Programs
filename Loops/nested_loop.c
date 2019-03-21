#include<stdio.h>
int main()
{
	int n,i,j,s;
	scanf("%d",&n);
	for(i=0;i<(2*n+1);i++)
	{
	if(i>=n)
	s=2*n-i;
	else
	s = i;
	for(j=0;j<=s;j++)
	printf("%d\t",j);
	printf("\n");
	}
}



