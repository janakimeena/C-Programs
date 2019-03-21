#include<stdio.h>
void main()
{

	int  m1[10][10],m2[10][10],m3[10][10],r1,c1,r2,c2;
	scanf("%d%d",&r1,&c1);
	scanf("%d%d",&r2,&c2);
	if((r1!=r2)||(c1!=c2))
	printf("Matrices cannot be added");
	else
	{
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&m1[i][j]);
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&m2[i][j]);

		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		m3[i][j]=m1[i][j]+m2[i][j];

		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		printf("%d",m3[i][j]);
	}
	
}








