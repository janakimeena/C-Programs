#include<stdio.h>
int bin_search(int a[10],int lower, int upper,int s)
{
	if(lower>upper)
		return 0;
	int mid = (lower+upper)/2;
	if(a[mid]==s)
		return 1;
	if(s<a[mid])
		bin_search(a,lower,mid-1,s);
	else
		bin_search(a,mid+1,upper,s);
}
void main()
{
	int n,a[10],search,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&search);
	if (bin_search(a,0,n-1,search))
		printf("Element found");
	else
		printf("Element not found");
}


