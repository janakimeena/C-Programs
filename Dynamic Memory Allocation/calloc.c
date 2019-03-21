#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,n,i;
	scanf("%d",&n);
	a = (int*) calloc(sizeof(int),n);
	b = (int*) realloc(a,n+5);
	for(i=0;i<n+5;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n+5;i++)
	printf("%d\t",b[i]);
	free(a);
}


