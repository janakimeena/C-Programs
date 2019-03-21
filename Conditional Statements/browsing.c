#include<stdio.h>
int main()
{
	int hours,min,amount;
	printf("Enter number of hours and minutes");
	scanf("%d%d",&hours,&min);
	if (hours>7)
		printf("Invalid input);
	else if(hours>5)
	{
		amount=200;
		hours = hours-5;
		amount=amount+hours*50+min;
	}
	else
	{
		amount=hours*50+min;
	}
	printf("%d",amount);
}














