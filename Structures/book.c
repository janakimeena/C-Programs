#include<stdio.h>
typedef int page;
typedef struct book1
{
	char name[20];
	float price;
	page pages;
}book;
void main()
{
	book b1[5];
	int i;
	for(i=0;i<5;i++)
	scanf("%s%f%d",b1[i].name,&b1[i].price,&b1[i].pages);
	for(i=0;i<5;i++)
	{
			printf("Value of b1\n");
			printf("%s\n%f\n%d",b1[i].name, b1[i].price,b1[i].pages);
	}
	/*scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
	scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
	printf("Value of b1\n");
	printf("%s\n%f\n%d",b1.name,b1.price,b1.pages);
	printf("Value of b2\n");
	printf("%s\n%f\n%d",b2.name,b2.price,b2.pages);*/
}










