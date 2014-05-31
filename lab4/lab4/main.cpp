#include "Tree.hpp"
#include "Leaf.hpp"
#include <iostream>
/**
  @mainpage Lab #4.	\n
  Implementation of Tree class.
  Numeration of leafs begins with "1"(root - #1). 
*/

/*
  Для проверки можно использовать вх. данные:
5
0 1
1 2
2 3
2 4
4 5
*/
void main()
{
	int N, position, value;
	std::cin>>N;
	std::cin>>position>>value;
	Tree tree(value);

	for (int i = 0; i<N-1; i++)
	{
		std::cin>>position>>value;
		tree.addLeaf(value,position);
	}

	std::cout<<"\n Straight pass  ";
	for (int i = 1; i <= N; i++)
	{
		std::cout<<tree.at(i)->getValue()<<"  ";
	}

	std::cout<<"\n Reverse pass  ";
	for (int i = 1; i <= N; i++)
	{
		std::cout<<tree.atReverse(i)->getValue()<<"  ";
	}

	std::cout<<"\n Symmetric pass  ";
	for (int i = 1; i <= N; i++)
	{
		std::cout<<tree.atSymmetric(i)->getValue()<<"  ";
	}

	system("pause");
}

/*Tree tree(1);
	tree.addLeaf(2,1);
	tree.addLeaf(3,2);
	tree.addLeaf(4,2);
	tree.addLeaf(5,4);
	Leaf* l = tree.at(5);
	l = tree.atReverse(4);
	l = tree.atSymmetric(5);*/
