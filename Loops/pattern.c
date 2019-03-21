#include<stdio.h>
void main()
{
	int n,i_counter,j_counter;
	scanf("%d",&n);
	for(i_counter=0;i_counter<=n;i_counter++)
	{
	for(j_counter=0;j_counter<=i_counter;j_counter++)
	printf("%d\t",j_counter);
	printf("\n");
	}
	for(i_counter=0;i_counter<n;i_counter++)
	{
	for(j_counter=0;j_counter<=n-i_counter-1;j_counter++)
		printf("%d\t",j_counter);
	printf("\n");
}
	
}














