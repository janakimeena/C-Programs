#include<stdio.h>
#include<string.h>
void my_rev(char* s, char * r)
{
	int i,j,l;
	l = strlen(s);
	for(i=l-1,j=0;i>=0;i--,j++)
	r[j] = s[i];
	r[j]='\0';
}
int main()
{
	char s[20],r[20];
	scanf("%s",s);
	my_rev(s,r);
	printf("%s",r);
}





