#include<stdio.h>
void read_matrix(int [][10],int r,int c);
int count_zero(int [][10], int r, int c);
void read_matrix(int matrix[][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&matrix[i][j]);
}
void main()
{
	int matrix[10][10],row,col,i,j,count;
	scanf("%d%d",&row,&col);
	read_matrix(matrix,row,col);
	count = count_zero(matrix,row,col);
	printf("Number of zeros is %d",count);
}


