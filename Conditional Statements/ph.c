#include<stdio.h>
int main()
{
	float ph;
	scanf("%f",&ph);
	if(ph<0)
	printf("Invalid input");
	else if(ph>12)
	printf("Very alakaline");
	else if(ph>7)
	printf("alkaline");
	else if(ph==7)
	printf("Neutral");
	else if(ph>=2)
	printf("acidic");
	else
	printf("Very acidic");
}
