#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **m,i,j,r,c;
	scanf("%d%d",&r,&c);
	m = (int**)malloc(sizeof(int*)*r);
	for(i=0;i<r;i++)
	m[i] =(int*)malloc(sizeof(int)*c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	//scanf("%d",&m[i][j]);
	scanf("%d",(*(m+i)+j));
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)	
	//scanf("%d",&m[i][j]);
	printf("%d\t",*(*(m+i)+j));
	printf("\n");
	}
	for(i=0;i<r;i++)
	free(m[i]);
	free(m);
}

















