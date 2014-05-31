#pragma once
/**
  @mainpage Lab #3.	\n
  Implementation of List, Queue ans Stack classes.
*/

#include "List.h"
#include "stdlib.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void main ()
{
	List l;
	listNode* itr;
	
	int N,delN;
	int index, value;

	cout<<"Enter number of elements"<<endl;
	cin>>N;
	cout<<"Enter elements as \"position <..> value\""<<endl	;
	for (int i = 0; i<N; i++)
	{
		cin>>index>>value;
		listNode* temp = new listNode(value); 
		l.insert(temp,index);
	}
	cout<<"Enter position to delete:"<<endl;
	cin>>delN;

	l.remove(delN);
	
	cout<<"List:"<<endl;
	for (itr = l.head->next; itr!= l.tail; itr = itr->next)
	{
		cout<<itr->value<<" ";
	}

	system("pause");
}