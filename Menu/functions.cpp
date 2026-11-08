#include <iostream>
#include "functions.h"
#include "struct.hpp"

void print_children(Menu* menu_arr[],int size) {
	for (int i = 0; i < size; i++) {
		std::cout << menu_arr[i]->title << std::endl;
	}
}

void universities() {
	Menu spbu = { "1 - СПбГУ", uni1 };
	Menu itmo = { "2 - ИТМО", uni2 };
	Menu poly = { "3 - Политех", uni3 };
	Menu laty = { "1 - ЛЭТИ", uni4 };


	Menu* uni_children[] = { &spbu, &itmo, &poly, &laty };
	

	int choice1;
	do {
		std::cout << "- - - УНИВЕРСИТЕТЫ СПБ- - -" << std::endl;

		std::cout << "0 - назад в предыдущее меню" << std::endl;
		int size_uni = sizeof(uni_children) / sizeof(uni_children[0]);
		print_children(uni_children,size_uni);

		std::cout << ">>>  ";
		std::cin >> choice1;

		if (choice1 - 1 == -1 ) {
			break;
		}

		uni_children[choice1-1]->func();
	} while (true);
}

void uni1() {
	Menu pm_pu = { "1 - ПМ-ПУ", fac1 };
	Menu matmech = { "2 - МатМех", fac2 };
	Menu ling = { "3 - Факультет Лингвистики", fac3 };

	Menu* spbu_children[] = { &pm_pu, &matmech, &ling };

	int choice2;
	do {
		std::cout << "- - - ФАКУЛЬТЕТЫ СПБГУ - - -" << std::endl;

		std::cout << "0 - назад в предыдущее меню" << std::endl;
		int size_spbu = sizeof(spbu_children) / sizeof(spbu_children[0]);
		print_children(spbu_children,size_spbu);

		std::cout << ">>>  ";
		std::cin >> choice2;

		if (choice2 - 1 == -1) {
			break;
		}

		spbu_children[choice2 -1]->func();
	} while (true);
}

void uni2() {
	std::cout << "Вы выбрали ИТМО" << std::endl;
	std::cin.get();
	exit(0);
}

void uni3() {
	std::cout << "Вы выбрали Политех" << std::endl;
	std::cin.get();
	exit(0);
}

void uni4() {
	std::cout << "Вы выбрали ЛЭТИ" << std::endl;
	std::cin.get();
	exit(0);
}

void fac1() {
	std::cout << "Вы выбрали ПМ-ПУ!" << std::endl;
	std::cin.get();
	exit(0);
}

void fac2() {
	std::cout << "Вы выбрали МатМех!" << std::endl;
	std::cin.get();
	exit(0);
}

void fac3() {
	std::cout << "Вы выбрали Лингвистику!" << std::endl;
	std::cin.get();
	exit(0);
}