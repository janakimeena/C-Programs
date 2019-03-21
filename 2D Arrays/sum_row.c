#include<stdio.h>
int main()
{
	int m1[10][10],r,c,i,j,s=0;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&m1[i][j]);
	for(i=0;i<r;i++)
	{
		s=0;
		for(j=0;j<c;j++)
		s+=m1[i][j];
		printf("%d",s);
	}
}






