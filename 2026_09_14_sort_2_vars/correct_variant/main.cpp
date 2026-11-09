#include <iostream>
#include "io.hpp"
#include "sortings.hpp"

int main() {
	int arr_size;

	std::cout << "Введите размер массива:  ";
	std::cin >> arr_size;

	int* arr = new int[arr_size];

	biv::input_array(arr, arr_size);

	std::cout << "Первоначальный массив:" << std::endl;
	biv::print_array(arr, arr_size);

	biv::my_sort(arr, arr_size);

	std::cout << "Сортированный массив:" << std::endl;
	biv::print_array(arr, arr_size);

	std::cout << "Для выхода из программы нажмите Enter" << std::endl;

	std::cin.ignore();
	std::cin.get();

	delete[] arr;
	return 0;
}