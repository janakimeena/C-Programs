#include<stdio.h>
#include<math.h>
void main()
{
	int num,flag,num_num,i;
	int smallest,iter;
	scanf("%d",&num_num);
	for(i=0;i<num_num;i++)
	{
	flag=0;
	iter=2;
	scanf("%d",&num);
	if(num%3==0)
	continue;		
	smallest = sqrt(num);
	while(iter<=smallest)
	{
		if(num%iter==0)
		{
			printf("Not prime\n");
			flag =1;
			break;
		}
		iter++;
	}
	if(flag==0)
	printf("Prime\n");
}
}








