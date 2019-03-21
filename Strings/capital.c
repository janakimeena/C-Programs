#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int n=0,i;
	scanf("%[^\n]",s);
	if (s[0]>=65 &&s[0]<=90)
	n++;
	for(i=1;s[i]!='\0';i++)
	if ((s[i-1]==' ') && (s[i]>=65 &&s[i]<=90))
	n++;
	printf("%d",n);
}




