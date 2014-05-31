///Classes and their factories
#pragma once

#include <iostream>

class A
{
	public:
	virtual void show() = 0;
};

class B : public A
{
public:
	void show()
	{
		std::cout<<" B ";
	}
};

class C : public A
{
public:
	void show()
	{
		std::cout<<" C ";
	}
};

class D : public A
{
public:
	void show()
	{
		std::cout<<" D ";
	}
};

class factory
{
public:
	virtual A* create() = 0;
};

class factoryB : public factory
{
public:
	A* create()
	{
		return new B;
	}
};

class factoryC : public factory
{
public:
	A* create()
	{
		return new C;
	}
};

class factoryD : public factory
{
public:
	A* create()
	{
		return new D;
	}
};

