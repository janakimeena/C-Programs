#include<stdio.h>
#include<string.h>
typedef struct 
{
	char name[20];
	char regno[10];
	int marks[5];
}stud;
void f(stud s[],int n)
{
	s[0].marks[0]=0;
}
int main()
{
	stud s1[10];
	int i,j;
	for(i=0;i<3;i++)	
	{
	scanf("%s%s",s1[i].name,s1[i].regno);
	for(j=0;j<5;j++)
	scanf("%d",&s1[i].marks[j]);
	}
	f(s1,3);
	for(i=0;i<3;i++)	
	{
	printf("%s\n%s\n",s1[i].name,s1[i].regno);
	for(j=0;j<5;j++)
	printf("%d\n",s1[i].marks[j]);
	}
}




