#include <iostream>
#include "io.hpp"

namespace biv {
	void print_array(int* arr, int size) {
		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	void input_array(int* arr, int size) {
		for (int i = 0; i < size; i++) {
			std::cout << "Введите элемент массива №" << i + 1 << std::endl;
			std::cin >> arr[i];
		}
	}
}