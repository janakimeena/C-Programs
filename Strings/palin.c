#include<stdio.h>
#include<string.h>
void main()
{
	char str[30];
	int len,i,flag=0;	
	scanf("%s",str);
	len = strlen(str);
	for(i=0;i<len/2;i++)
	{	
		if(str[i]!=str[len-i-1])
		{
				printf("Not palindrome");
				flag = 1;
				break;
		}
	}
	if (flag==0)
		printf("Palindrome");
}


