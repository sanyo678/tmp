#pragma once
#include "listNode.h"
/** 
@class List
List represents doubly linked list with basic standart methods
*/
class List
{
public:
	///Beginning of List
	listNode*	head;
	///Ending of List
	listNode*	tail;
	///Length of List
	int			length;

	///Method inserts new element to List
	///@param new element
	///@param insert position
	void		insert(listNode*,int);
	///Getting List element by position
	///@param position
	int			get(int);
	///Method removes element from List
	///@param new element
	///@param insert position
	void		remove(int);
	///Default List conctructor
				List(void);
				~List(void);
};

