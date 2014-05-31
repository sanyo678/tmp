#pragma once;
#include <functional>

template <typename T>
void sort(T* arr, int size, std::function<bool(T& a,T& b)> swap);