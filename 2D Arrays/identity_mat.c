#include<stdio.h>
void main()
{
	int m1[10][10],r1,i,j,flag=0;
	scanf("%d",&r1);
	for(i=0;i<r1;i++)
	for(j=0;j<r1;j++)
	scanf("%d",&m1[i][j]);
	for(i=0;i<r1;i++)
	{
	if(flag!=0)
		break;
	for(j=0;j<r1;j++)
	{
		if(i==j)
		{	
			if(m1[i][j]!=1)
			{
			flag=1;
		printf("Not an identity matrix\n");
			break;
			}
		}
		else
		{
			if(m1[i][j]!=0)
			{
			flag=1;
		printf("Not an identity matrix\n");
			break;
			}					
		}
	}
}
	if (flag==0)
	printf("Identity matrix");
}
