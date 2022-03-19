
#include<stdio.h>
#include "linked_list.h"

void reverse_list(struct node* start)
{
	struct node* p,*q,*r;
	p=start;
	q=NULL;
	r=NULL;

	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
		
	}
}

int main()
{

	struct node* list = create_list(10);

	for(int i=1;i<10;i++)
	{
		push_back(list,i);
	}
	
	struct node* temp = list;

	reverse_list(list);

	destroy_list(list);
	while(temp!=NULL)
	{
		printf("%d\n",temp->num);
		temp = temp->next;
	}



	return 0;
}
