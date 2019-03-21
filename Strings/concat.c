#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20],*s3;
	scanf("%s",s1);
	scanf("%s",s2);
	s3 = strcat(s1,s2);
	printf("%s",s1);
}
