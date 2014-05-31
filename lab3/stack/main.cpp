#pragma once
#include "Stack.hpp"
#include "stdlib.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void main ()
{
	Stack s;
	int N,value;

	cout<<"Enter number of elements"<<endl;
	cin>>N;
	cout<<"Enter elements:"<<endl	;
	for (int i = 0; i<N; i++)
	{
		cin>>value;
		s.push(value);
	}
	
	
	cout<<"Stack:"<<endl;
	for (int i = 0; i < N; ++i)
	{
		cout<<s.pop()<<" ";
	}

	system("pause");
}