#include<stdio.h>
void main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	a[i]=0;
	*(a+-500)=100;
printf("%d",a[-500]);
}
