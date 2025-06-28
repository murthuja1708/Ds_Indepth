#include<stdio.h>
#include<stdlib.h>

struct node{
	int priority;
	int info;
	struct node *link;
}*front = NULL;

void insert(int item,int item_priority);
int del();
void display();
int isEmpty();

int main()
{
	int choice,item,item_priority;

	while(1)
	{
		printf("1 Insert\n");
		printf("2 Delete\n");
		printf("3 Display\n");
		printf("4 Quit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Input the item added in queue\n");
				scanf("%d",&item);
				printf("enter its priority\n");
				scanf("%d",&item_priority);
				insert(item,item_priority);
				break;
			case 2:
				printf("deleted item is %d\n",del());
				break;
			case 3:
				display();
				break;

			case 4:
				exit(1);
			default :
				printf("wrong choice\n");
		}
	}
	return 0;
}


void insert(int item,int item_priority)
{
	struct node *temp,*p;
	temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("memory not available\n");
		return;
	}
	temp->info = item;
	temp->priority = item_priority;
	if(isEmpty() || item_priority < front->priority)
	{
		temp->link = front;
		front = temp;
	}
	else{
		p=front;
		while(p->link != NULL && p->link->priority <= item_priority)
		{
			p = p->link;
		}
		temp->link = p->link;
		p->link = temp;
	}
}

int del()
{
	struct node *temp;
	int item;
	if(isEmpty())
	{
		printf("Queue underflow\n");
		exit(1);
	}
	else{
		temp = front;
		item = temp->info;
		front = front->link;
		free(temp);
	}
	return item;
}

int isEmpty()
{
	if(front == NULL)
	{
		return 1;
	}
	else{
		return 0;
	}
}


void display()
{
	struct node* ptr;
	ptr = front;
	if(isEmpty())
	{
		printf("Queue is Empty\n");
	}
	else{
		printf("priority	item\n");
		while(ptr!=NULL)
		{
			printf("%4d	%4d\n",ptr->priority,ptr->info);
			ptr=ptr->link;
		}
	}
}




