#include <iostream>
#include "sortings.hpp"
#include "io.hpp"
#include <windows.h>
void my_sort(int* arr, const int size);
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	int n; // n - размер массива
	cout << "Введите размер массива:" << endl;
	cin >> n;
	int* arr = new int[n]; // arr - массив, который будем менять
	for (int i = 0; i < n; i++) {
		cout << "Введите эелемент массива № " << i + 1 << endl;
		cin >> arr[i];
	}
	int* old_arr = new int[n]; // old_arr - первоначальный массив для вывода
	for (int i = 0; i < n; i++) {
		old_arr[i] = arr[i];
	}
	biv::my_sort(arr, n); // вызывается алгоритм сортировки
	biv::print_array(old_arr, arr, n);
	cout << endl;
	cout << "Нажмите Enter для закрытия";
	cin.ignore();
	cin.get();
	delete[] arr;
	delete[] old_arr;
}