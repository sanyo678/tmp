#include "Stack.hpp"


Stack::Stack(void)
{
	head = new stackNode(0);
}

void Stack::push(int a)
{
	stackNode* A = new stackNode(a);
	A->setNext(head->getNext());
	head->setNext(A);
}

int Stack::pop(void)
{
	int ans = head->getNext()->getValue();
	stackNode* temp = head->getNext();
	head -> setNext( head->getNext()->getNext() );
	delete temp;
	return ans;
}

int Stack::getTop()
{
	if (head)
		return head->getValue();
	else
		return 0;
}

Stack::~Stack(void)
{
	while (head->getNext() != nullptr)
	{
		stackNode* temp = head->getNext();
		head ->setNext(	head->getNext()->getNext() );
		delete temp; 
	}
}
