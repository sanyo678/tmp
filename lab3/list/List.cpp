#pragma once
#include "List.h"


List::List(void)
	:
	length(0)
{
	tail = new listNode(0);
	head = new listNode(0);
	head->next = tail;
	head->prev = tail;
	tail->next = head;
	tail->prev = head;
}

void List::insert(listNode* a,int i)
{
	if (i>length)
		i = length;
	listNode* ptr;
	for (ptr = head; i>=0; ptr = ptr->next, i--)
		;
	ptr->insert(a);
	length++;
	
}

int List::get(int i)
{
	if (i>length)
		i = length;
	listNode* ptr;
	for (ptr = head; i>=0; ptr = ptr->next, i--)
		;
	return ptr->value;
}

void List::remove(int i)
{
	if (i>length)
		i = length;
	listNode* ptr;
	for (ptr = head; i>=0; ptr = ptr->next, i--)
		;
	ptr->remove();
}

List::~List(void)
{
	listNode *p1,*p2;
	for (p1 = head, p2 = head->next; p1!=tail; p1=p2, p2 = p2->next)
	{
		delete p1;
	}
	delete p1;
}
