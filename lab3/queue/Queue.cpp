#include "Queue.hpp"


Queue::Queue(void)
{
	head = new queueNode(0);
	tail = new queueNode(0);
	head->next = tail;
	head->prev = tail;
	tail->next = head;
	tail->prev = head;
}

void Queue::push(int a)
{
	queueNode* A = new queueNode(a);
	A->prev = tail;
	A->next = tail->next;
	tail->next->prev = A;
	tail->next = A;
}

int Queue::pop()
{
	if (tail->next == head)
		return 0;
	int ans = head->prev->getValue();
	head->prev->prev->next = head;
	queueNode* temp = head->prev;
	head->prev = head->prev->prev;
	delete temp;
	return ans;
}

int Queue::getFirst()
{
	return head->prev->getValue();
}

Queue::~Queue(void)
{
	queueNode* itr;
	while (head->prev != tail)
		pop();
	delete head;
	delete tail;
}
