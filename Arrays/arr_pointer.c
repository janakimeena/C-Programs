#include<stdio.h>
typedef struct
{
	char name[20];
	char regno[10];
	int marks;
}student;
void main()
{
	int a,*pa=&a;
	char c, *pc=&c;
	double d, *pd=&d;
	student s, *ps = &s;
	printf("%p\t%p\n",pa,pa++);
	printf("%p\t%p\n",pc,pc++);
	printf("%p\t%p\n",pd,pd++);
	printf("%p\t%p\n",ps,ps++);
}



