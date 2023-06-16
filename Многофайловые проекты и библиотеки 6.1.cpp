// Многофайловые проекты и библиотеки 6.1

#include <iostream>
#include "calc.h"
#include <windows.h>




int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b;
    int num;

    std::cout << "Введите первое число: " ;
    std::cin >> a;
    std::cout << "Введите второе число: " ;
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> num;

    switch (num) {
    case 1:
        std::cout << a << " " << "плюс " << b << " " << "= " << add(a, b) << std::endl;
        break;
    case 2:
        std::cout << a << " " << "минус " << b << " " << "= " << sub(a, b) << std::endl;
        break;
    case 3:
        std::cout << a << " " << "умножить на " << b << " " << "= " << mul(a, b) << std::endl;
        break;
    case 4:
        std::cout << a << " " << "разделить на " << b << " " << "= " << division(a, b) << std::endl;
        break;
    case 5:
        if (b == 0)
            std::cout << a << " " << "в степени " << b << " " << "= 1" << std::endl;
        else
        {
            std::cout << a << " " << "в степени " << b << " " << "= " << exp(a, b) << std::endl;
        }
        break;
    default:
        std::cout << "Такой операции нет" << std::endl;
        break;
    }
    return 0;
}
