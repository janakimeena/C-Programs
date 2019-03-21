#include<stdio.h>
int main()
{
	int n,i,fact=1;
	scanf("%d%d",&n,&i);
	for(i=1;i<n+1;i++)
	fact*=i;
	printf("ret value of pf %d ",printf("ans %d",fact));	
}
