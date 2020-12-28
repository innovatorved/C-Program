#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

//head store the first address of linked list
struct node *head;

//Add element in Begining
void insert(struct node** h , int d)
{
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = d;
	new->next = (*h);
	(*h) = new;
}

void end(struct node** h , int d)
{
	struct node *newend = (struct node *)malloc(sizeof(struct node));
	newend->data = d;
	newend->next = NULL;

	struct node *temp = (*h);
	if (*h == NULL)
	{
		*h = newend;
		return;
	}

	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newend;
}

//enter the position you want to save data
void after(struct node** h , int d , int pos)
{
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data =d;

	struct node *temp = *h;

	if (pos==1)
	{
		insert(&*h,d);
		return;
	}

	for( int i = 0; i <pos-2 ; i ++)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
	}
	new->next = temp->next;
	temp->next = new;
	return;

}
//delete an element
void deleteNode(struct node** ref, int key) 
{
	struct node *temp = *ref, *prev;

	if (temp != NULL && temp->data == key) 
	{
	    *ref = temp->next;
	    free(temp);
	    return;
	}
	  // Find the key to be deleted
	while (temp != NULL && temp->data != key) 
	{
	    prev = temp;
	    temp = temp->next;
	}

  // If the key is not present
   if (temp == NULL) return;

  // Remove the node
  	prev->next = temp->next;

  	free(temp);
}


//print an linked list
void print(struct node *h)
{
	while(h != NULL)
	{
		printf(" %d ",h->data);
		h = h->next;
	}
}

int main()
{
	struct node *head = NULL;
	
	insert(&head , 45);
	insert(&head , 5);
	end(&head , 10);
	after(&head,2,2);
	print(head);

	printf("\n\n");
	deleteNode(&head , 10);
	print(head);
}