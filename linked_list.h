#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

#include<stdlib.h>
#include<stdio.h>

struct node{
	int num;
	struct node* next;
}*list;

struct node* createNode(int);

struct node* create_list();

void push_back(struct node*,int);

void push_front(struct node*,int);

void insert(struct node*,int,size_t);

void remove_key(struct node*,int);

void pop_back(struct node*);

void pop_front(struct node*);

void destroy_list(struct node*);

void reverse_list1(struct node*);

void display_list();

void reverse_list(struct node*);

void reverse_list1(struct node*);

void swap_adjacent(struct node*);

void swap_adjacent2(struct node*);

#endif
