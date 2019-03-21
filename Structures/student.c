#include<stdio.h>
typedef struct 
{
	char name[30];
	char regno[10];
	int marks[5];
	int total;	
}student;



void read_details(student s[20],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s%s",s[i].name,s[i].regno);
		for(j=0;j<5;j++)
		scanf("%d",&s[i].marks[j]);
		s[i].total=0;
	}
}
void compute_total(student s[20],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<5;j++)
	s[i].total+=s[i].marks[j];	
}

void sort(student s[20],int n)
{
	int i,j;
	student temp;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(s[i].total<s[j].total)	
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
}
void print_details(student s[20],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t",s[i].name,s[i].regno);
		for(j=0;j<5;j++)
		printf("%d\t",s[i].marks[j]);
		printf("%d",s[i].total);
		printf("\n");
	}
}

void main()
{
	int n,i;
	student s[20];
	scanf("%d",&n);
	read_details(s,n);
	compute_total(s,n);
	sort(s,n);
	print_details(s,n);
}







