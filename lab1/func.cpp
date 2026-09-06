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
	for (int i = 0; i < this->size; i++)
	{
		std::cout << "¬ведите " << i + 1 << " элемент массива - ";
		std::cin >> this->arr[i];
	}
}

void Array::print_arr()
{
	for (int i = 0; i < this->size; i++)
		std::cout << this->arr[i] << " ";
	std::cout << std::endl;
}

Array Array::concat(Array& arr1)
{
	int amount = this->size + arr1.size;	
	Array result(amount);

	for (int i = 0; i < this->size; i++)
		result.arr[i] = this->arr[i];

	for (int i = 0; i < arr1.size; i++)
		result.arr[this->size+i] = arr1.arr[i];

	return result;
}