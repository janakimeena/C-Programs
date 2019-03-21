#include<stdio.h>
void main()
{
	int a[10],n,i,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",(a+i));
	for(i=0;i<n;i++)
	printf("%d\n",*(a+i));
	a=&m;
}
