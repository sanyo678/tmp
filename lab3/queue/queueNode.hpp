#pragma once
/** 
@class listNode 
*/
class queueNode
{
public:
	///Previous element
	queueNode*			next;
	///Next element
	queueNode*			prev;
	///Default constructor
	///@param value
						queueNode(int);
	int					getValue(void);
						~queueNode(void);

private:
	///Value of current element
	int					value;
};

