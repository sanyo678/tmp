#include "queueNode.hpp"


queueNode::queueNode(int a)
	:value(a),
	next(nullptr),
	prev(nullptr)
{
}


int queueNode::getValue()
{
	return value;
}

queueNode::~queueNode(void)
{
}
