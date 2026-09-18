#include <iostream>
#include "header.h"


Array::Array(int size_arr)											    // конструктор с параметром
{
	size = size_arr;
	arr = new int[size];
}

Array::Array(const Array& other)                                       // конструктор копировани€ 
{
	size = other.size;
	arr = new int[other.size];

	for (int i = 0; i < size; i++)
		arr[i] = other.arr[i];
}

Array::~Array()                                                        // деструктор
{
	delete[] arr;
	arr = nullptr;
}

void Array::input_arr()                                                // заполнение массива числами
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "¬ведите " << i + 1 << " элемент массива - ";
		std::cin >> arr[i];
	}
}

void Array::print_arr()                                              // вывод массива на экран 
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;                                        
}

Array Array::combine(Array& arr1)                                     // объединение массивов 
{
	int amount = this->size + arr1.size;	
	Array result(amount);

	for (int i = 0; i < this->size; i++)
		result.arr[i] = this->arr[i];

	for (int i = 0; i < arr1.size; i++)
		result.arr[this->size+i] = arr1.arr[i];

	return result;
}