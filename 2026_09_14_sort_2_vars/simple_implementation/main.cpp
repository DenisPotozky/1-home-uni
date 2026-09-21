#include <iostream>
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
	my_sort(arr, n); // вызывается алгоритм сортировки
	cout << "Первоначальный массив:" << endl;
	for (int i = 0; i < n; i++) {
		cout << old_arr[i] << " ";
	}
	cout << endl;
	cout << "Сортированный массив:" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Нажмите Enter для закрытия";
	cin.ignore();
	cin.get();
	delete[] arr;
	delete[] old_arr;
}

void my_sort(int* arr, const int size) {
	int n = size;
	while (n > 0) { // использую bubble sort
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