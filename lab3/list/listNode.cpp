#pragma once
#include "listNode.h"


listNode::listNode(int a)
	:next(this),
	prev(this),
	value(a)
{
}

listNode* listNode::remove()
{
	next->prev = prev;
	prev->next = next;
	next = prev = this;
	return this;
}

void listNode::insert(listNode* a)
{
	/*listNode* b = prev;
	a->prev = b;
	a->next = this;
	prev = a;
	b->next = this;*/
	
	prev->next=a;
	a->prev = prev;
	prev = a;
	a->next = this;
}

listNode::~listNode(void)
{
}
