#include<stdio.h>
int main()
{
	int r,n1,n2,divd,divs,rem;
	scanf("%d%d",&n1,&n2);
	divd=n1;
	divs=n2;

	for(rem=divd%divs;rem!=0;rem=divd%divs)
	{

		divd=divs;
		divs = rem;

	}
	printf("The GCD is%d",divs);
}









