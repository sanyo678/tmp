/** 
@class A
Another class to test sort function
*/

#pragma once
class B
{
public:
	char val;
	bool operator>(B& b);
	bool operator<(B& b);
	B(int b = 0);
	~B(void);
};

bool swapB(B& a, B& b);