#include<stdio.h>
int modify(int[],int,int);
int main()
{
	int a[10],n,i,index,ret;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&index);
	ret = modify(a,n,index);
	printf("%d\n",ret);
	printf("After modify\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
int modify(int a[],int n,int index)
{
	if(index>n)
		return -1;
	a[index]+=1;
	return a[index];
}








