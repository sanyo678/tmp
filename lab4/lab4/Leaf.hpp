#pragma once
#include <vector>
#include <memory>
/**
@class Leaf
Leaf represents element of "Tree"  
*/
class Leaf
{
public:
	typedef std::shared_ptr<Leaf> ptr;
	///Constructor  
	///@param Value of leaf
						Leaf(int);
	///Return leaf's value  
	int					getValue();
	///Set leaf's value
	///@param Position
	void				setValue(int);
	///Return leaf on "position" position (straight pass)
	///@param Position
	///@param Result buffer
	int					getLeaf(int pos, Leaf*& result, bool done = false);
	///Return leaf on "position" position (reverse pass)
	///@param Position
	///@param Result buffer
	int					getLeafReverse(int pos, Leaf*& result, bool done = false);
	///Return leaf on "position" position (symmetric pass)
	///@param Position
	///@param Result buffer
	int					getLeafSymmetric(int pos, Leaf*& result, bool done = false);
	///Adding new leaf as right child to leaf with position "position" 
	///@param Value
	///@param Position of parent leaf
	int					add(int,int);
						~Leaf(void);
private:
	///Leaf's value
	int					value;
	///Count of children
	int					childrenCount;
	///Children
	std::vector<ptr>	children;

	void				addToCurrent(int);
};

