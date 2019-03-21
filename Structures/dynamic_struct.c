#include<stdio.h>
#include<stdlib.h>
typedef struct book
{
char title[50];
char author[50];
int num_of_pages;
float price;
}book;
int main()
{
	book *b;
	b = (book*)malloc(sizeof(book));
	scanf("%s",b->title);
	scanf("%s",b->author);
	scanf("%d",&b->num_of_pages);
	scanf("%f",&b->price);
	printf("%s",(*b).title);
	printf("%s",b->author);
	printf("%d",b->num_of_pages);
	printf("%f",b->price);
	free(b);

}




