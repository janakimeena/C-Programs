#include<stdio.h>
void main()
{
	int m1[10][10],m2[10][10],m3[10][10];
	int row1,col1,row2,col2,row3,col3,i,j,k;
	scanf("%d%d",&row1,&col1);	
	scanf("%d%d",&row2,&col2);
	if((col1==row2))
	{
		for(i=0;i<row1;i++)
		for(j=0;j<col1;j++)
		scanf("%d",&m1[i][j]);
		for(i=0;i<row2;i++)
		for(j=0;j<col2;j++)
		scanf("%d",&m2[i][j]);


		for(i=0;i<row1;i++)
		for(j=0;j<col2;j++)
		{
			m3[i][j]=0;
			for(k=0;k<col1;k++)
	m3[i][j]= m3[i][j]+ m1[i][k]*m2[k][j];
		}




		printf("Resultant matrix is\n");
		for(i=0;i<row1;i++)
		{
		for(j=0;j<col2;j++)
		printf("%d\t",m3[i][j]);
		printf("\n");
		}
	}
	else
	printf("Matrices cannot be added\n");
}









