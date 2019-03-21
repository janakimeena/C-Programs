#include<stdio.h>
#include<string.h>
typedef struct 
{
	char name[20];
	char regno[10];
	int marks[5];
}stud;
void f(stud* s)
{
	s->marks[0]=0;
}
int main()
{
	stud s1;
	strcpy(s1.name,"NAME");
	strcpy(s1.regno,"1");
	s1.marks[0]=10;
	s1.marks[1]=10;
	s1.marks[2]=10;
	s1.marks[3]=10;
	s1.marks[4]=10;
	f(&s1);
	printf("%d",s1.marks[0]);
}




