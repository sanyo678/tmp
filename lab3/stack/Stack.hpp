#pragma once
#include "stackNode.hpp"
/** 
@class Stack
Stack represents stack with basic standart methods
*/
class Stack
{
public:
	///Default Stack conctructor
					Stack(void);
					~Stack(void);
	///Method pushes new element to Stack
	///@param new element
	void			push(int);
	///Method pops top element of Queue
	int				pop(void);
	///Returns top element
	int				getTop(void);

private:
	///Pointer to the top of Stack
	stackNode*		head;
};

