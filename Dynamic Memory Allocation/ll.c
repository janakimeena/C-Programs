#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insert_beg(node**,int);
void main()
{
	int data;
	node *head=NULL,*temp;
	scanf("%d",&data);
	insert_beg(&head,data);
	scanf("%d",&data);
	insert_beg(&head,data);
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}	
}
void insert_beg(node** head,int data)
{
	node* temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = *head;
	*head = temp;
}










