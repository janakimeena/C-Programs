#include<stdio.h>
#include<stdlib.h>
int pop_error = 0;
typedef struct
{
	int top;
	char *elements;
	int capacity;
}stack;
void initialize(stack *s,int capacity)
{
	s->top = -1;
	s->capacity = capacity;
	s->elements=(char*)malloc(sizeof(char)*capacity);
}
int isempty(stack* s)
{
	if(s->top==-1)
	return 1;
	return 0;
}
int isfull(stack* s)
{
	if(s->top==(s->capacity-1))
	return 1;
	return 0;
}
int push(stack* s, char c)
{
	if(isfull(s))
	return 0;
	s->elements[++s->top]=c;
	return 1;
}
char pop(stack* s)
{
	char c=' ';
	pop_error=0;
	if(!isempty(s))
	{
		c = s->elements[s->top--];
	}
	else
	pop_error = 1;
	return c;	
}
int main()
{
	stack s;
	int c,r;
	char e;
	scanf("%d",&c);
	initialize(&s,c);
	r = push(&s,'a');
	if(r==0)
	printf("Element could not be inserted Stack Full\n");
	r = push(&s,'b');
	if(r==0)
	printf("Element could not be inserted Stack Full\n");
	e = pop(&s);
	if(pop_error==0)
	printf("%c\n",e);
	else
	printf("Stack was empty");
	e = pop(&s);
	if(pop_error==0)
	printf("%c\n",e);
	else
	printf("Stack was empty");
	e = pop(&s);
	if(pop_error==0)
	printf("%c\n",e);
	else
	printf("Stack was empty");
}

























































