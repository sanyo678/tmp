#include "stackNode.hpp"


stackNode::stackNode(int a)
	:value(a)
{
	setNext(nullptr);
}

int stackNode::getValue()
{
	return value;
}

stackNode* stackNode::getNext()
{
	return next;
}

void stackNode::setNext(stackNode* a)
{
	next = a;
}

stackNode::~stackNode(void)
{
}
