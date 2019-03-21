#include<stdio.h>
void increment(int[10],int);
void main()
{
	int a[10];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	increment(a,n);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
void increment(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	a[i]++;
}











