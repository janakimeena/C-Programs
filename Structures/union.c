#include<stdio.h>
#include<string.h>
typedef union
{
	char voter_id[50];
	long int aadhar_id;	
}passenger;
void main()
{
	passenger p;
//	printf("%ld",sizeof(p));
	scanf("%s",p.voter_id);
	scanf("%ld",&p.aadhar_id);
	printf("%s\n",p.voter_id);
	printf("%ld\n",p.aadhar_id);
}



