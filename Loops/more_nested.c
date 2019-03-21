#include<stdio.h>
void main()
{
	int row,col,pat,i,j,k;
	scanf("%d%d%d",&row,&col,&pat);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			for(k=1;k<=pat;k++)
				printf("%d",k);
			printf("\t");
		}
		printf("\n");
	}
}



