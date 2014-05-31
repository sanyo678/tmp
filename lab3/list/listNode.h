#pragma once
/** 
@class listNode 
*/
class listNode
{
public:
	///Previous element
	listNode*		prev;
	///Next element
	listNode*       next;
	///Value of current element
	int				value;

	///Method removes element from List
	listNode*		remove();
	///Method inserts new element before current
	///@param new element
	void			insert(listNode*);
	///Default constructor
					listNode(int);
					~listNode(void);
};

