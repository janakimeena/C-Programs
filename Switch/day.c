#include<stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	switch(d)
	{
	case 0:
	printf("Sunday");
	break;
	case 1:
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	printf("I am printed");
	break;
	case 5:
	printf("Friday");
	break;
	case 6:
	printf("Saturday");
	break;
	default:
	printf("Invalid");
	}
}




