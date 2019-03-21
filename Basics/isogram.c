#include<stdio.h>
void main()
{
	int num_letters,i,fact=1;
	scanf("%d",&num_letters);
	for(i=1;i<=num_letters;i++)
	{
	fact*=i; //fact=fact*i
	}
	printf("The number of words that can be formed using %d letters is %d",num_letters,fact);	
}
