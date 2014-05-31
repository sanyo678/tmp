/**
  @mainpage Lab #5.	\n
  Implementation of QuickSort template function. 
*/

#include "quicksort.h"
#include "quicksortImpl.h"
#include "A.h"
#include "B.h"

void main()
{
	A arrA[5] = {A(3),A(2),A(5),A(1),A(4)};
	sort<A>(arrA,5,swapA);

	B arrB[5] = {B('c'),B('b'),B('e'),B('a'),B('d')};
	sort<B>(arrB,5,swapB);

	system("pause");
}