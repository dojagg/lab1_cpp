#pragma once
#include <iostream>

class Array
{
private:
	int* arr;
	int size;

public:
	Array(int size);
	void input_arr();
	void print_arr();
	Array concat(Array &arr);
	~Array();
};