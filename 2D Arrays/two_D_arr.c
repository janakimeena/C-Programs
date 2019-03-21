#include<stdio.h>
int arr(int[][10],int,int);
int main()
{
	int r,c,a[10][10],i,j,sum;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	sum = arr(a,r,c);
	printf("%d",sum);
}

int arr(int m[][10],int r,int c)
{
	int i,j,sum=0;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	sum+=m[i][j];
	return sum;
}












