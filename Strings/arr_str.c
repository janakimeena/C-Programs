#include<stdio.h>
#include<string.h>
int main()
{
	char s[10][20],t[20];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",s[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
	if(strcmp(s[i],s[j])>0)
	{
		strcpy(t,s[i]);
		strcpy(s[i],s[j]);
		strcpy(s[j],t);
	}

	}
	for(i=0;i<n;i++)
		printf("%s",s[i]);
}








