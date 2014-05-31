#pragma once
#include <functional>

/**@page 1 bubbleSort 
@function <b>void bubbleSort(S*, int, std::function<bool(S,S)>)</b>\n
Sort by "bubble" method
@param array
@param length of array
@param sort function
*/
template<typename S>
void bubbleSort(S* arr, int n, std::function<bool(S,S)> f);