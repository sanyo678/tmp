#include "Tree.hpp"
#include <assert.h>



Tree::Tree(int _root)
	:root(new Leaf(_root)),
	numElements(1)
{
}

void Tree::addLeaf(int val, int pos)
{
	if (pos > numElements)
		return;
	root->add(val,pos);
	numElements++;
}

Leaf* Tree::at(int pos)
{
	assert(pos <= numElements);
	Leaf* result(nullptr);
	root->getLeaf(pos,result);
	return result;
}

Leaf* Tree::atReverse(int pos)
{
	assert(pos <= numElements);
	Leaf* result(nullptr);
	root->getLeafReverse(pos,result);
	return result;
}

Leaf* Tree::atSymmetric(int pos)
{
	assert(pos <= numElements);
	Leaf* result(nullptr);
	root->getLeafSymmetric(pos,result);
	return result;
}

Tree::~Tree(void)
{
}
