#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[20];
	char regno[10];
	int marks;
}student;
void main()
{
	int a=5;
	float f=5.5;
	double d=125.56;
	student s;
	strcpy(s.name,"N1");
	strcpy(s.regno,"R1");
	s.marks = 100;
	int *pa=&a;
	float *pf=&f;
	double *pd=NULL;
	pd = &d;
	student *ps=&s;
	*pa = 10;
	printf("Int is %d\t%p\n",a,pa);
	printf("Float is %f\t%f\n",f,*pf);
	printf("Double is %lf\t%lf\n",d,*pd);
	printf("Name of student is %s %s",s.name, (*ps).name);
}













