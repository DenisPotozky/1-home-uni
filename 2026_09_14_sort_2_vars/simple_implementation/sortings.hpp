#ifndef SORTINGS_HPP
#define SORTINGS_HPP

namespace biv {
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
}

#endif