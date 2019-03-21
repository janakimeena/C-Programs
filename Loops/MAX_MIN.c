#include<stdio.h>
int main()
{
	int s[20],n,max,min,sum=0,i;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	max=min=s[0];
	for(i=0;i<n;i++)
	{
		sum+=s[i];
		if(s[i]>max)
		max=s[i];
		else if (s[i]<min)
		min=s[i];
	}
	avg = sum/n;
	for(i=0;i<n;i++)
	{
		if(s[i]==min)
		printf("Least\n");
		else if(s[i]==max)
		printf("Highest\n");
		else if((s[i]>min)&&(s[i]<=avg))
		printf("Moderate\n");
		else if((s[i]>avg)&&(s[i]<max))
		printf("High\n");
	}
}
