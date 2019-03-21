#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[30],c;
	int count[26],i,n;
	for(i=0;i<26;i++)
	count[i]=0;
	scanf("%[^\n]s",str);
//	printf("string is %s",str);
	n = strlen(str);
	for(i=0;i<n;i++)
	{
		if(isalpha(str[i]))
		{
		c=tolower(str[i]);
		count[c-'a']++;		
		}
	}
	for(i=0;i<26;i++)
	{
		printf("%c is %d\n",i+97,count[i]);
	}
}














