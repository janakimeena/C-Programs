#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],ch;
	int i,l;
	scanf("%s",s);
	l = strlen(s);
	ch = s[l-1];
	for(i=l-2;i>0;i--)
	s[i]=s[i+1];
	s[0]=ch;
}




