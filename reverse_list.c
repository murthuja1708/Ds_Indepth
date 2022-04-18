
#include "linked_list.h"

void reverse_list1(struct node* start)
{
	struct node* p=start->next;
	struct node* temp;
	while(p!=NULL)
	{
		temp=p;
		free(p);
		push_front(start,temp->num);
	}
	
}

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

	struct node* list = create_list();

	for(int i=1;i<10;i++)
	{
		push_back(list,i);
	}
	
	struct node* temp = list;

	reverse_list1(list);

	destroy_list(list);
	while(temp!=NULL)
	{
		printf("%d\n",temp->num);
		temp = temp->next;
	}



	return 0;
}
