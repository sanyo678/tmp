#pragma once

#include "quicksort.h"
#include "assert.h"

template <typename T>
void sort(T* arr, int size, std::function<bool(T& a,T& b)> swap)
{
	int i,j,buff;
	T key;
	key = arr[(size - 1) % 2];
	i = 0;
	j = size - 1;

	while (i <= j)
	{
		while (arr[i] < key)
			i++;
		while (arr[j] > key)
			j--;
		if (i <= j)
		{
			assert(swap(arr[i],arr[j]));
			i++;
			j--;
		}
	}
	if (j>0)
		sort(arr, j+1, swap);
	if (i<size-1)
		sort(arr+i, size-i, swap);
}