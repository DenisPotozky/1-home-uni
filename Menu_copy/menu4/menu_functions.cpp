#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

void show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std:;endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";
}

void IBusko::exit(const MenuItem* current) {
	std::exit(0);
}

void IBusko::study_summ(const MenuItem* current) {

}

void IBusko::study_subtract(const MenuItem* current) {

}

void IBusko::study_multiply(const MenuItem* current) {

}

void IBusko::study_divide(const MenuItem* current) {

}

void IBusko::study_go_back(const MenuItem* current) {

}