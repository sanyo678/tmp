#pragma once
#include "queueNode.hpp"
/** 
@class Queue
Queue represents singly linked queue with basic standart methods
*/
class Queue
{
public:
	///Default Queue conctructor
						Queue(void);
	///Method pushes new element to Queue
	///@param new element
	void				push(int);
	///Method pops first element of Queue
	int					pop();
	///Returns first element
	int					getFirst();
						~Queue(void);
private:
	//Pointer to the first element of Queue
	queueNode*			head;
	//Pointer to the last element of Queue
	queueNode*			tail;
};

