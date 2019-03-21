#include<stdio.h>
void main()
{
	int a[10],i;
	int*pa = a;
	for(i=0;i<10;i=i+1)
	scanf("%d",(pa++));
//	*(pa++) = i;	a[i]=i;
	pa = &a[10];
	i=0;
	while(pa-->&a[0])
	{
	printf("%d\n",*pa);
	i++;
	}
	
}




