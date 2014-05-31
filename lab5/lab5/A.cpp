#include "A.h"


A::A(int a)
	:val(a)
{
}

bool A::operator>(A& a)
{
	return val>a.val;
}

bool A::operator<(A& a)
{
	return val<a.val;
}

A::~A(void)
{
}

bool swapA(A& a, A& b)
{
	A buff(0);
	buff = a;
	a = b;
	b= buff;
	return true;
}

