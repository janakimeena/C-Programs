#include<stdio.h>
void main()
{
	int n, *np,m=216;
	np = &n;
	scanf("%d%d",&n,np);
	printf("%d\n",*np);
	np =&m;
	printf("%d\n",*np);
}
