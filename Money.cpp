#include "Money.h"

void Money::Read()
{
    std::cout << "������ ����: ";
    std::cin >> hryvnias >> kopecks;
}
void Money::Display()
{
    std::cout << "����: " << hryvnias << "," << kopecks << " UAH" << std::endl;
}
void Money::Init(long long hryvnias, unsigned int kopecks)
{
    this->hryvnias = hryvnias;
    this->kopecks = kopecks;
}
std::string Money::toString() const
{
    return std::to_string(hryvnias) + "," + std::to_string(kopecks) + " UAH";
}

