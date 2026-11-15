// #include <clocale>
#include <cstdlib>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
	// std::setlocale(LC_ALL, "");

	IBusko::MenuItem study_summ = { "1 - Хочу научиться складывать!", IBusko::study_summ };
	IBusko::MenuItem study_subtract = { "2 - Хочу научиться вычитать!", IBusko::study_subtract };
	IBusko::MenuItem study_multiply = { "3 - Хочу научиться умножать!", IBusko::study_multiply };
	IBusko::MenuItem study_divide = { "4 - Хочу научиться делить!", IBusko::study_divide };
	IBusko::MenuItem study_go_back = { "0 - Выйти в главное меню", IBusko::study_go_back };

	IBusko::MenuItem* study_children[] = {
		&study_go_back,
		&study_summ,
		&study_subtract,
		&study_multiply,
		&study_divide
	};

	const int study_size = sizeof(study_children) / sizeof(study_children[0]);

	IBusko::MenuItem study = { "1 - Хочу учиться математике!", IBusko::show_menu, study_children, study_size };
	IBusko::MenuItem exit = { "0 - Я лучше пойду полежу...", IBusko::exit };

	IBusko::MenuItem* main_children[] = { &exit,&study };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	IBusko::MenuItem main = { nullptr, IBusko::show_menu, main_children, main_size };

	main.func(&main);
	int user_input;
	do {
		std::cin >> user_input;
		std::cout << std::endl;

		main.children[user_input]->func(main.children[user_input]);
	} while (true);
	
	return 0;
}