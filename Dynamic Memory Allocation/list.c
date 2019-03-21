#include<stdio.h>
#include<stdlib.h>
//Declaration of a structure for representing the node in a linked list
typedef struct node
{
	int data;
	struct node *next;
}node;
/*
	This function is used to insert a new data to the beginning of the list. 
So if the list already contains 4,5,6 and the new data to be inserted is 3 then after insertion the list should contain 3,4,5,6	
*/
//Head has to be passed by reference or address, because this function is going to make some changes in head and that changes should be reflected in main
//Data can be passed by value - no harm as we are not going make any changes in data
void insert_beg(node** head,int d)
{
	node * p;
	//Create a new node
	p = (node*)malloc(sizeof(node));
	//Put the data in the node
	p->data = d;
	//Connect the new node to the existing list
	p->next = *head;
	//Make the head to point to the new first element
	*head = p;
}
/*
This function will be called to insert a value 'd' in the position 'pos' of the linked list
For example, if the linked list already contains 10, 5, 6 and 7
Now you want to insert 15 in position 3 then the list will have the elements
10, 5, 15, 6 and 7
*/
void insert_pos(node** head,int d,int pos)
{
	//Counter to keep track the position of temp pointer
	int t=1;
	node* temp,*p;
	//If position is 1 then call insert beginning function
	if(pos==1)
	insert_beg(head,d);
	else
	{
		//Make temp to point to the first node of ll
		temp = *head;
		//Move the temp pointer to the node in position pos-1, insertion at position 'pos' will be done by keeping temp pointer to stand in position 'pos-1'
		while(t<pos-1)
		{
			temp=temp->next;
			t++;
		}
		//Create a new node
		p = (node*)malloc(sizeof(node));
		//Place the data in the new node
		p->data =d;
		//Make the new node to point to the next element (current element at position 'pos')
		p->next= temp->next;
		//Connect the new node to the linked list by making the node in postion 'pos-1' to hold address of new node
		temp->next = p;
	}		
}
/*
This function will delete the node at the end
We have to consider cases
	(i) When there is only one node
	(ii) When there are many nodes
*/
void delete_end(node** head)
{
	node * temp,*temp1;
	temp = *head;
	//When there  is only one node
	if (temp->next == NULL)
	{
		//Make the list empty by making head to be NULL
		*head = NULL;
		//Give back the memory to the system
		free(temp);	
		return;	
	}
	//If there is more than one node
	// then move to the last but one node
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	//Have a copy of address of last node to free the memory
	temp1 = temp->next;
	//Make next part of last but one node as NULL so that now it becomes NULL
	temp->next = NULL;
	//Free the memory
	free(temp1);
}
void main()
{
	node *head=NULL;	
	node * temp;
	int data;
	//Read the data
	scanf("%d",&data);
	//Insert the data in the beginning
	insert_beg(&head,data);
	scanf("%d",&data);
	//Insert the data in the beginning
	insert_beg(&head,data);
	scanf("%d",&data);
	//Insert the data in the beginning
	insert_pos(&head,data,3);
	//Make temp pointer to point to the first element of list
	temp = head;
	printf("Before deletion\n");
	//Print the list before deletion
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
	//Delete two nodes at the end
	delete_end(&head);
	delete_end(&head);
	//Print the list after deletion
	printf("After deletion\n");
	temp = head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}




