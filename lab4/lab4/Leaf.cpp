#include "Leaf.hpp"


Leaf::Leaf(int a)
	:value(a),
	childrenCount(0)
{
}

int Leaf::getValue()
{
	return value;
}

void Leaf::setValue(int a)
{
	value = a;
}

void Leaf::addToCurrent(int a)
{
	ptr l(new Leaf(a));
	childrenCount++;
	children.push_back(std::move(l));
}

int Leaf::getLeaf(int pos, Leaf*& result, bool done)
{
	if (done) 
		return 0;
	if (pos == 1)
	{
		result = this;
		done = true;
		pos = 0;
	}
	else
	{
		pos--;
		for (ptr& l : children)
		{
			pos = l->getLeaf(pos, result, done);
		}
	}
	return pos;
}								

int	Leaf::getLeafReverse(int pos, Leaf*& result, bool done)
{
	if (done) 
		return 0;
	for (ptr& l : children)
	{
		pos = l->getLeafReverse(pos, result, done);
	}
	if (pos == 1)
	{
		result = this;
		done = true;
		pos = 0;
	}
	pos--;
	return pos;
}

int	Leaf::getLeafSymmetric(int pos, Leaf*& result, bool done)
{
	if (done) 
		return 0;
	if (!children.empty())
		pos = children[0]->getLeafSymmetric(pos, result, done);
	if (pos == 1)
	{
		result = this;
		done = true;
		pos = 0;
	}
	pos--;
	if (childrenCount>1)
		for (auto l = ++children.begin(); l != children.end(); l++)
		{
			pos = (*l) -> getLeafSymmetric(pos, result, done);
		}
	return pos;
}


int Leaf::add(int val, int pos)
{
	if (pos == 1)
	{
		addToCurrent(val);	
	}
	else
	{
		pos--;
		for (ptr& l : children)
		{
			pos = l->add(val,pos);
		}
	}
	return pos;
}


Leaf::~Leaf(void)
{
}
