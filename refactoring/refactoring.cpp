//---------------------------------------------------------------------------
#include <iostream>

#include <cmath>

#include <windows.h>

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused

void create_array_of_digits(int num, int arr[]);
void print_in_latin(int arr[]);

int main() { 
    SetConsoleOutputCP(CP_UTF8);
    
    int year;
    std::cout << "Введите год" << std::endl;
    std::cin >> year;

    int arr[4]{};
    create_array_of_digits(year,arr);

    print_in_latin(arr);

    system("pause");
            return 0;
}
//---------------------------------------------------------------------------
 
void print_in_latin(int arr[]) {
    
    char thousands[4][5] = { "M","MM","MMM","MMMM" };
    char hundreds[9][5] = { "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    char tens[9][5] = { "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    char ones[9][5] = { "I","II","III","IV","V","VI","VII","VIII","IX" };

    int i;
    for (i = 0; i < 4; i++)
        if (arr[3] == i + 1) std::cout << thousands[i];

    for (i = 0; i < 9; i++)
        if (arr[2] == i + 1) std::cout << hundreds[i];

    for (i = 0; i < 9; i++)
        if (arr[1] == i + 1) std::cout << tens[i];

    for (i = 0; i < 9; i++)
        if (arr[0] == i + 1) std::cout << ones[i];

    std::cout << std::endl;
}

void create_array_of_digits(int num, int arr[]) {
    
    int i = 0;

    while (num != 0) {
        arr[i] = num % 10;
        num = num / 10;
        i++;
    }
}