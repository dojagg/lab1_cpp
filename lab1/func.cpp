#include <iostream>
#include "header.h"


Array::Array(int size)                                               // конструктор с параметром
{
	this->size = size;
	this->arr = new int[size];
}

Array::~Array()                                                      // деструктор
{
	delete[] arr;
	arr = nullptr;
}

void Array::input_arr()                                              // заполнение массива числами
{
	for (int i = 0; i < this->size; i++)
	{
		std::cout << "¬ведите " << i + 1 << " элемент массива - ";
		std::cin >> this->arr[i];
	}
}

void Array::print_arr()                                              // вывод массива на экран 
{
	for (int i = 0; i < this->size; i++)
		std::cout << this->arr[i] << " ";
	std::cout << std::endl;                                        
}

Array Array::concat(Array& arr1)                                     // объединение массивов 
{
	int amount = this->size + arr1.size;	
	Array result(amount);

	for (int i = 0; i < this->size; i++)
		result.arr[i] = this->arr[i];

	for (int i = 0; i < arr1.size; i++)
		result.arr[this->size+i] = arr1.arr[i];

	return result;
}