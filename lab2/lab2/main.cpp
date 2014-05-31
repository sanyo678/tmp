/**
@mainpage Lab #2. Implementation of merge and bubble sort function templates
*/

#define N 5
#include "bubble.h"
#include "bubbleImpl.h"
#include "merge.h"
#include "mergeImpl.h"
#include <iostream>

void main()
{
	int a[N] = {12,2,5,1,3};
	int b[N] = {20,4,2,7,1};
	std::function<bool(int,int)> f = [](int a, int b)
	{
		return a>b;
	};
	
	bubbleSort<int>(a,N,f);
	bubbleSort<int>(b,N,f);
	int* c = mergeSort<int>(a,b,N,f);
	for (int i = 0; i < 2*N; ++i)
	{
		std::cout<<c[i]<<"  ";
	}
	delete [] c;
	system("pause");
}