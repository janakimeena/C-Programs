#include<stdio.h>
int main()
{
	int n,i_counter,low=0,med=0,high=0;
	float data,avg=0;
	scanf("%d",&n);
	for(i_counter=0;i_counter<n;i_counter++)
	{
	scanf("%f",&data);
	if (data<12)
	low++;
	else if(data<20)
	med++;
	else
	high++;	
	}
	printf("low %d",low);
	printf("med %d",med);
	printf("high %d",high);
	return 0;
}












