#include "header.h"
#include <iostream>
#include <locale.h>

int main()
{
	int size1, size2;

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите размер первого массива  - ";
	std::cin >> size1;
	Array arr1(size1);
	arr1.input_arr();

	std::cout << "\nВведите размер второго массива - ";
	std::cin >> size2;
	Array arr2(size2);
	arr2.input_arr();

	std::cout << "Первый массив - ";
	arr1.print_arr();

	std::cout << "\nВторой массив - ";
	arr2.print_arr();

	Array arr3 = arr1.concat(arr2);
	std::cout << "Результирующий массив - ";
	arr3.print_arr();
	return 0;
}