#pragma once
class stackNode
{
public:
	///Default constructor
	///@param value
					stackNode(int);
					~stackNode(void);
	///Getting current value
	int				getValue();
	///Getting pointer to next element
	stackNode*		getNext();
	///Set pointer to next element
	void			setNext(stackNode*);

private:
	///Value of current element
	int				value;
	///Pointer the next element
	stackNode*		next;
};

