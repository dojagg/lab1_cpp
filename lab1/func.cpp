#include <iostream>
#include "header.h"


Array::Array(int size)
{
	this->size = size;
	this->arr = new int[size];
}

Array::~Array()
{
	delete[] arr;
}

void Array::input_arr()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "¬ведите " << i + 1 << " элемент массива - ";
		std::cin >> arr[i];
	}
}

void Array::print_arr()
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

Array Array::concat(Array& arr1)
{
	int amount = size + arr1.size;	
	Array result(amount);

	for (int i = 0; i < size; i++)
		result.arr[i] = arr[i];

	for (int i = 0; i < arr1.size; i++)
		result.arr[size+i] = arr1.arr[i];

	return result;
}