#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next
};

//head store the first address of linked list
struct node *head;

//function for print an linked list
void Printlinkedlist(struct node *ele)
{
	while(ele!=NULL)
	{
		printf("%d\t", ele->data);
		ele = ele->next;
	}
}

int main()
{
	// add element in linked list
	struct node *one;
	struct node *two;
	struct node *three;

	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	one->data = 55;
	two->data = 66;
	three->data = 89;


	one->next = two;
	two->next = three;
	three->next = NULL;

	//define startin of linked list
	head = one;

	Printlinkedlist(head);
	return 0;
}