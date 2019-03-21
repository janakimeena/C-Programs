#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i;
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	a[i]=i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}





