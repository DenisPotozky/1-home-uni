#include <iostream>
#include "functions.h"
#include "struct.hpp"

int main() {

	Menu want_see = { "1 - Я хочу посмотреть вузы Сакт-Петербурга", universities };

	int user_choice;
	do {
		std::cout << "0 - Выйти" << std::endl;
		std::cout << want_see.title << std::endl;
		std::cout << ">>>  ";
		std::cin >> user_choice;

		if (user_choice == 1) {
			want_see.func();
		}
		else {
			exit(0);
		}
	} while (true);

	return 0;
}