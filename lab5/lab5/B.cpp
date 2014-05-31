#include "B.h"


B::B(int b)
	:val(b)
{
}

bool B::operator>(B& b)
{
	return val>b.val;
}

bool B::operator<(B& b)
{
	return val<b.val;
}

B::~B(void)
{
}

bool swapB(B& a, B& b)
{
	B buff(0);
	buff = a;
	a = b;
	b= buff;
	return true;
}

