#pragma once
#include "Leaf.hpp"
/** 
@class Tree
Basic tree of integers
*/
class Tree
{
public:
	///Constructor of tree with single root element 
	///@param Value of root
							Tree(int root);
	///Adding new leaf as right child to leaf with position "position" 
	///@param Value
	///@param Position of parent leaf
	void					addLeaf(int value,int position);
	///Return leaf on "position" position (straight pass)
	///@param Position
	Leaf*					at(int position);
	///Return leaf on "position" position (reverse pass)
	///@param Position
	Leaf*					atReverse(int position);
	///Return leaf on "position" position (symmetric pass)
	///@param Position
	Leaf*					atSymmetric(int position);
							~Tree(void);

private:
	///Top element of the tree
	Leaf::ptr				root;
	///Quantity of elements
	int						numElements;
};

