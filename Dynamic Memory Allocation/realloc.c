#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p = NULL;
	int ch;
	scanf("%d",&ch);
	if(ch==1)
	p = (int*)calloc(10,sizeof(int));
	printf("%p",p);
	if(p!=NULL)
	p = (int*)realloc(p,20*sizeof(int));
	printf("%p",p);
	free(p);
}






