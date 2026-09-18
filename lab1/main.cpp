#include "header.h"
#include <iostream>
#include <locale.h>

int main()
{
	int size1, size2;                                        // размер 1-го и 2-го массивов
	char choice;

	setlocale(LC_ALL, "Russian");

	do
	{
		std::cout << "Введите размер первого массива  - ";
		std::cin >> size1;
		Array arr1(size1);                                   // вызов конструктора для 1-го массива
		arr1.input_arr();

		std::cout << "\nВведите размер второго массива - ";
		std::cin >> size2;
		Array arr2(size2);                                   // вызов конструктора для 2-го массива 
		arr2.input_arr();

		std::cout << "\nПервый массив - ";                   // вывод 1-го массива на экран
		arr1.print_arr();

		std::cout << "Второй массив - ";                     // вывод 2-го массива на экран
		arr2.print_arr();

		Array arr3 = arr1.combine(arr2);                     // объединение массивов
		std::cout << "Результирующий массив - ";
		arr3.print_arr();                                    // вывод результирующего массива 

		std::cout << "\nХотите продолжить? (y/n) - ";
		std::cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}