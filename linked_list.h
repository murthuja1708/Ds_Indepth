#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

struct node{
	int num;
	struct node* next;
}*head;

struct node* createNode(int);

struct node* create_list(int);

void push_back(struct node*,int);

void push_front(struct node*,int);

void insert(struct node*,int,size_t);

void remove_key(struct node*,int);

void pop_back(struct node*);

void pop_front(struct node*);

void destroy_list(struct node*);

#endif
