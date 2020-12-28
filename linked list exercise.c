#include <stdio.h>
#include <stdlib.h>

struct node {

	int data;
	struct node *next;
};

struct node *head;

void print(struct node *head)
{
	while(head != NULL)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
}

int main()
{
	struct node *one;
	struct node *two;
	struct node	*three;
	

	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	one->data = 7;
	two->data = 9;
	three->data = 88;

	head = one;
	one->next = two;
	two->next = three;
	three->next = NULL;

	struct node *four;
	four = malloc(sizeof(struct node));
	four->data = 8;
	four->next = NULL;

	struct node *temp;
	temp = head;


	// End 
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = four;

	print(head);
	// add in midle
	struct node *six;
	six = malloc(sizeof(struct node));
	six->data = 123;


	struct node *temp2;
	temp2 = head;
	for(int i = 0; i < 1; i++)
	{
		if (temp2->next != NULL)
		{
			temp2 = temp2->next;
			//printf("hlww");
		}
		//printf("hlww");
	}
	six->next = temp2->next;
	temp2->next = six;
	
	printf("\n\n");
	print(head);

}