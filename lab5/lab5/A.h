/** 
@class A
Just a class to test sort function
*/

#pragma once
class A
{
public:
	int val;
	bool operator>(A& a);
	bool operator<(A& a);
	A(int a = 0);
	~A(void);
};

bool swapA(A& a, A& b);

