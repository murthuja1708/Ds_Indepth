#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

/*
struct node{
	int num;
	struct node* next;
}*head;
*/

struct node* createNode(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	if(temp)
	{
		temp->num = data;
		temp->next = NULL;
		return temp;
	}

	return NULL;
}

struct node* create_list(int num)
{
	head = createNode(num);
	return head;
}

void push_back(struct node* start,int num)
{
	if(start == NULL)
	{
		start = createNode(num);
	}
	else{
		struct node* temp = start;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = createNode(num);
	}
}

void push_front(struct node* start,int num)
{
	if(start == NULL)
	{
		printf("list is empty\n");
		start = createNode(num);
	}
	else
	{
		struct node* newNode = createNode(num);
		newNode->next = start;
		start = newNode;
	}
}

void insert(struct node* start,int num,size_t pos)
{
	struct node *newNode,*p;
	newNode = createNode(num);
	if(pos == 1)
	{
		newNode->next = start;
		start = newNode;
	}
	else{
		p = start;
		for(size_t i=1;i<pos-1 && p!=NULL;i++)
		{
			p = p->next;
		}
		if(p == NULL)
		{
			printf("there are less than %ld elements\n",pos);
		}
		else{
			newNode->next = p->next;
			p->next = newNode;
		}
	}
}

void remove_key(struct node* start,int key)
{
	struct node* temp = start,*p = NULL;
	while(temp!= NULL && temp->num!=key)
	{
		p=temp;
		temp = temp->next;
	}
	if(temp == NULL)
	{
		printf("%d not found\n",key);
	}
	else
	{
		p->next = temp->next;
		free(temp);
		temp = NULL;
	}
}

void destroy_list(struct node* start)
{
	struct node* temp = start,*p;
	
	while(temp!=NULL)
	{
		p = temp->next;
		free(temp);
		temp = p;
	}


}

void pop_back(struct node*);

void pop_front(struct node*);

