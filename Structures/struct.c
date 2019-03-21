#include<stdio.h>
#include<string.h>
typedef struct stud
{
	char name[30];
	char regnum[10];
	int marks;
}stud;
void main()
{
	int n,i;
	stud a[10];
	char search[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s",a[i].name);
	scanf("%s",a[i].regnum);
	scanf("%d",&a[i].marks);
	}
	scanf("%s",search);
	if (bin_search(a,0,n-1,search))
		printf("Element found");
	else
		printf("Element not found");
}


int bin_search(stud a[10],int lower, int upper,char* s)
{
	if(lower>upper)
		return 0;
	int mid = (lower+upper)/2;
	if(strcmp(a[mid].regnum,s)==0)
		return 1;
	if(strcmp(s,a[mid].regnum)<0)
		bin_search(a,lower,mid-1,s);
	else
		bin_search(a,mid+1,upper,s);
}






