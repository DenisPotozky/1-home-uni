#ifndef IO_HPP
#define IO_HPP

namespace biv {
	using namespace std;
	void print_array(int* old_arr, int* arr,int size) {
		int n = size;
		cout << "Первоначальный массив:" << endl;
		for (int i = 0; i < n; i++) {
			cout << old_arr[i] << " ";
		}
		cout << endl;
		cout << "Сортированный массив:" << endl;
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
}

#endif
