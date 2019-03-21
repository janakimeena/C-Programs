#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **m1,**m2,**m3;
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	m1 = (int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	{
		m1[i]= (int*)malloc(c*sizeof(int));
	}
	m2 = (int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	{
		m2[i]= (int*)malloc(c*sizeof(int));
	}
	m3 = (int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	{
		m3[i]= (int*)malloc(c*sizeof(int));
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&m1[i][j]);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&m2[i][j]);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	//m1[i]=*(m1+i)
	m3[i][j] = *((*(m1+i))+j) + m2[i][j];
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	printf("%d\t",m3[i][j]);
	printf("\n");
	}
}



