// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<Windows.h>
#include "Money.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Money amount1, amount2, result;

    std::cout << "Введіть першу суму (гривні копійки): ";
    amount1.Read();
    std::cout << "Введіть другу суму (гривні копійки): ";
    amount2.Read();
    // Додавання
    result = amount1 + amount2;
    std::cout << "Сума: " << result.toString() << std::endl;
    // Віднімання
    result = amount1 - amount2;
    std::cout << "Різниця: " << result.toString() << std::endl;
    // Порівняння
    if (amount1 < amount2) {
        std::cout << "Сума 1 менша за суму 2" << std::endl;
    }
    else if (amount1 == amount2) {
        std::cout << "Суми рівні" << std::endl;
    }
    else {
        std::cout << "Сума 1 більша за суму 2" << std::endl;
    }
    // Множення на число
    double factor;
    std::cout << "Введіть число, на яке потрібно помножити суму: ";
    std::cin >> factor;
    result = amount1 * factor;
    std::cout << "Сума після множення: " << result.toString() << std::endl;

    // Інкремент та декремент
    ++amount1;
    std::cout << "Сума 1 після інкременту: " << amount1.toString() << std::endl;

    --amount2;
    std::cout << "Сума 2 після декременту: " << amount2.toString() << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
