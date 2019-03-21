#include<stdio.h>
#include<math.h>
void main()
{
	int num_of_days, day_count[20],i,sum=0;
	float avg;
	scanf("%d",&num_of_days);	

	for(i=0;i<num_of_days;i++)
	{
	scanf("%d",(day_count+i));
	sum+=*(day_count+i);
	//day_count[i]===*(day_count+i);
	}
	avg = (float)sum/num_of_days;
	printf("Average is %f\n",avg);
	for(i=0;i<num_of_days;i++)
	printf("diff in %d day is %0.2f\n",i+1,fabs(avg-day_count[i]));	
}







