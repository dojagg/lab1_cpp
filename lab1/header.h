#pragma once
// Вариант 5. Объединение одномерных массивов
#include <iostream>

class Array                   // класс массива
{
private: 
	int* arr;                 // указатель на массив
	int size;                 // размер массива

public:
	Array(int size);          // конструктор с параметром
	void input_arr();         // метод заполнения массива
	void print_arr();         // метод вывода массива на экран
	Array concat(Array &arr); // метод объединения массива
	~Array();                 // деструктор
};	
