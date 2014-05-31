#pragma once
#include <functional>

/**@page mergeSort 
@function <b>mergeSort(S*, S*, int n, std::function<bool(S,S)>)</b>\n
Sort by merge
@param 1st array
@param 2nd array
@param length of arrays
@param sort function
@return new array
*/
template<typename S>
S* mergeSort(S*, S*, int n, std::function<bool(S,S)>);