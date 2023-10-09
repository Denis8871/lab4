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

    std::cout << "������ ����� ���� (����� ������): ";
    amount1.Read();
    std::cout << "������ ����� ���� (����� ������): ";
    amount2.Read();
    // ���������
    result = amount1 + amount2;
    std::cout << "����: " << result.toString() << std::endl;
    // ³�������
    result = amount1 - amount2;
    std::cout << "г�����: " << result.toString() << std::endl;
    // ���������
    if (amount1 < amount2) {
        std::cout << "���� 1 ����� �� ���� 2" << std::endl;
    }
    else if (amount1 == amount2) {
        std::cout << "���� ���" << std::endl;
    }
    else {
        std::cout << "���� 1 ����� �� ���� 2" << std::endl;
    }
    // �������� �� �����
    double factor;
    std::cout << "������ �����, �� ��� ������� ��������� ����: ";
    std::cin >> factor;
    result = amount1 * factor;
    std::cout << "���� ���� ��������: " << result.toString() << std::endl;

    // ��������� �� ���������
    ++amount1;
    std::cout << "���� 1 ���� ����������: " << amount1.toString() << std::endl;

    --amount2;
    std::cout << "���� 2 ���� ����������: " << amount2.toString() << std::endl;

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
