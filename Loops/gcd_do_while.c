#include<stdio.h>
void main()
{
	int dividend,divisor,rem;
	int d1, d2;
	scanf("%d%d",&dividend,&divisor);
	d1 = dividend;
	d2 = divisor;
	//rem = dividend%divisor;
	//while(rem!=0)
	//for(rem = dividend%divisor;rem!=0;rem = dividend%divisor)
	do
	{
		rem = dividend%divisor;
		if(rem!=0)
		{
		dividend = divisor;
		divisor = rem;
		}		
	}while(rem!=0);
	printf("GCD of %d and %d is %d ",d1, d2, divisor);
}








