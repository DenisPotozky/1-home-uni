#include <iostream>

void input_array(int* arr, const int size);
void my_sort(int* arr, const int size);
void print_array(const int* arr, const int size);

int main() {
	int arr_size;
	std::cout << "Введите размер массива:  ";
	std::cin >> arr_size;

	int* arr = new int[arr_size];
	input_array(arr, arr_size);
	std::cout << "Первоначальный массив:" << std::endl;
	print_array(arr, arr_size);

	my_sort(arr, arr_size);

	std::cout << "Сортированный массив:" << std::endl;
	print_array(arr, arr_size);

	delete[] arr;
	return 0;
}


void input_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "Введите элемент массива №" << i + 1 << std::endl;
		std::cin >> arr[i];
	}
}

void my_sort(int* arr, const int size) {
	int n = size;
	while (n > 0) {
		for (int i = 0; i < size - 1; i++) {

			if (arr[i] < arr[i + 1]) {

				int x = arr[i + 1];

				arr[i + 1] = arr[i];
				arr[i] = x;

			}

		}
		n--;
	}
}

void print_array(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}