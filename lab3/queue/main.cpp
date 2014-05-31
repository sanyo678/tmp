#pragma once
#include "Queue.hpp"
#include "stdlib.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void main ()
{
	Queue q;
	int N,value;

	cout<<"Enter number of elements"<<endl;
	cin>>N;
	cout<<"Enter elements:"<<endl	;
	for (int i = 0; i<N; i++)
	{
		cin>>value;
		q.push(value);
	}
	
	
	cout<<"Queue:"<<endl;
	for (int i = 0; i < N; ++i)
	{
		cout<<q.pop()<<" ";
	}

	system("pause");
}