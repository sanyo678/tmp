#pragma once


template<typename S>
/**@page 2 swap
@function <b>swap(S&, S&)</b>\n
Swap two elements
@param 1st element
@param 2nd element
*/
void swap(S& a, S& b)
{
	S buff;
	buff = a,
	a = b;
	b = buff;
}

/**@page 3 sortFunc 
@function <b>sortFunc(T, T, std::function<bool(T,T)>)</b>\n
Basic lambda-expression wrap
@param 1st element
@param 2nd element
@param sort function
*/
template <typename T>
bool sortFunc(T a, T b, std::function<bool(T,T)> f)
{
	return f(a,b);
}

template<typename S>
void bubbleSort(S* arr, int n, std::function<bool(S,S)> f)
{
	for (int i = 0; i < n-1; ++i)
	{	
		bool done = true;
		for (int j = 0; j < n-i-1; ++j)
		{
			if (sortFunc(arr[j],arr[j+1], f)) // if a[j]>a[j+1]
			{
				swap(arr[j],arr[j+1]);
				done = false;
			}
		}
		if (done) 
			break;
	}
}