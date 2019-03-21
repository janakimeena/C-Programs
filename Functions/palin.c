#include<string.h>
#include<stdio.h>
void my_strrev(char* s,char *r)
{
	int l=strlen(s),i,j;
	for(i=l-1,j=0;i>=0;i--,j++)
	r[j]=s[i];
	r[j]='\0';
}
int main()
{
	char s[20],r[20];
	scanf("%s",s);
	my_strrev(s,r);
	if (strcmp(s,r)==0)
		printf("Palin");
	else
		printf("Not palin");
}





