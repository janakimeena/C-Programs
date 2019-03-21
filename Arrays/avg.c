#include<stdio.h>
int main()
{
	int n,i_counter,high=0;
	float data[100],avg=0,sum=0;
	scanf("%d",&n);
	for(i_counter=0;i_counter<n;i_counter++)
	{
	scanf("%f",&data[i_counter]);
	sum+=data[i_counter];
	}
	avg=sum/n;
	for(i_counter=0;i_counter<n;i_counter++)
	{
		if(data[i_counter]>avg)
		high++;
	}
	return 0;
}





















