#include <iostream>
#include <string>
#include <windows.h>
SetConsoleOutputCP(65001);

int main() {
	std::cout << "Введите приветствие: ";
	std::string str;
	std::getline(std::cin, str);
	std::cout << str << std::endl;
}
