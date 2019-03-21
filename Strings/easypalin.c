#include<stdio.h>
#include<string.h>
void main()
{
	char str[30],rev[30];
	int len,i,j;	
	scanf("%s",str);
	len = strlen(str);

	for(i=len-1,j=0;i>=0;i--,j++)
	rev[i] = str[j];
	rev[len]='\0';

	if (strcmp(str,rev)==0)
	printf("Palindrome\n");
	else
	printf("Not palindrome\n");
}





