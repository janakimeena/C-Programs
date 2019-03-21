#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[30];
	char regno[10];
	int marks[5];
	int total;	
}student;


void swap_names(student* s1, student* s2)
{
	int temp;
//	char temp[30];
/*	strcpy(temp,s1->name);
	strcpy(s1->name,s2->name);
	strcpy(s2->name,temp);*/
	temp = s1->marks[0];
	s1->marks[0]=s2->marks[0];
	s2->marks[0] = temp;
	printf("In fn\n");
	printf("%d\t%d\n",s1->marks[0],s2->marks[0]);
}


void main()
{
	student s1,s2;
	int i;
	printf("%ld",sizeof(s1));
	/*scanf("%s%s",s1.name,s1.regno);
	for(i=0;i<5;i++)
	scanf("%d",&s1.marks[i]);
	scanf("%s%s",s2.name,s2.regno);
	for(i=0;i<5;i++)
	scanf("%d",&s2.marks[i]);
	swap_names(&s1,&s2);
	printf("%d\t%d",s1.marks[0],s2.marks[0]);*/
}







