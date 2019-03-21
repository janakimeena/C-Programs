#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a=5,*p,**dp;
	p = &a;
	dp =  &p;
	printf("Sizes %ld \t %ld",sizeof(p),sizeof(dp));
	printf("%d\n%d\n%d",a,*p,**dp);
}




