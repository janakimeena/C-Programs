#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*m,*c,i,*r;
	scanf("%d",&n);
	m = (int*)malloc(n*sizeof(int));
	c = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	m[i]=i+1;
	r = (int*)realloc(m,(n+5)*sizeof(int));
	printf("Reallocated mem\n");
	for(i=0;i<n+5;i++)
	printf("%d\n",r[i]);
	free(r);
	free(c);
	
}









