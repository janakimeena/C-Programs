#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int day;
	int month;
	int year;
}date;
void main()
{
	date* d;
	d = (date*) malloc(sizeof(date));
	scanf("%d",&d->day);
	scanf("%d",&d->month);
	scanf("%d",&d->year);
	printf("%d\n",d->day);
	printf("%d\n",d->month);
	printf("%d\n",d->year);
}




















