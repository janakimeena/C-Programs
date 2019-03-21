#include<stdio.h>
#include<stdlib.h>
void fn(int (*m)[10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	printf("%d\n",m[i][j]);
}
void main()
{
	int m[10][10];
	int r,c,i,j;
	/*m = (int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	{
		m[i]= (int*)malloc(c*sizeof(int));
	}*/
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	m[i][j]=i+j;
	fn(m,r,c);
}
