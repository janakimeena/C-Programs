#include<stdio.h>
void main()
{
	int n=5;	
	while(n)
	{
		scanf("%d",&n);
		if (n<0)
		{
		printf("I am continuining\n");
		continue;
		}
		printf("%d\n",n);			
	}
}
