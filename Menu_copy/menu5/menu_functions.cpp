#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

void show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;

	return current->children[user_input];
}

void IBusko::exit(const MenuItem* current) {
	std::exit(0);
}

void IBusko::study_summ(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current;
}

void IBusko::study_subtract(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current;
}

void IBusko::study_multiply(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current;
}

void IBusko::study_divide(const MenuItem* current) {
	std::cout << current->title << std::endl;
	return current;
}

void IBusko::study_go_back(const MenuItem* current) {
	return current;
}