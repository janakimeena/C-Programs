#include<stdio.h>
#pragma pack(1)
typedef struct st
{
char name[10];
int marks;
char regno[5];	
}student;
int total(student a[])
{
	int sum=0,i;
	a[0].marks=0;
	for(i=0;i<5;i++)
	{
	sum+=a[i].marks;
	}
	return (sum);
}
int main()
{
	student a[5];
	int i,ret;
	for(i=0;i<5;i++)
	{
	scanf("%s",a[i].name);	
	scanf("%s",a[i].regno);
	scanf("%d",&a[i].marks);
	}
	ret = total(a);
	printf("%d\n",a[0].marks);
	printf("%d",ret);
/*	for(i=0;i<5;i++)
	{
	printf("%s\n",a[i].name);	
	printf("%s\n",a[i].regno);
	printf("%d\n",a[i].marks);
	}*/

}


