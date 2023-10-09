#pragma once
#include<iostream>
#include<string>

class Money
{
private:
    long long hryvnias;
    unsigned int kopecks;

public:
   
    Money() : hryvnias(0), kopecks(0) {}

    
    Money(long long hryvnias, unsigned int kopecks) : hryvnias(hryvnias), kopecks(kopecks) {}

    
    Money(const Money& other) : hryvnias(other.hryvnias), kopecks(other.kopecks) {}
    void Read();
    void Display();
    void Init(long long hryvnias, unsigned int kopecks);
    std::string toString() const;

    Money operator+(const Money& other) const {
        Money result;
        result.hryvnias = this->hryvnias + other.hryvnias;
        result.kopecks = this->kopecks + other.kopecks;
        if (result.kopecks >= 100) {
            result.hryvnias += result.kopecks / 100;
            result.kopecks %= 100;
        }
        return result;
    }

    Money operator-(const Money& other) const {
        Money result;
        result.hryvnias = this->hryvnias - other.hryvnias;
        if (this->kopecks < other.kopecks) {
            result.hryvnias--;
            result.kopecks = 100 - (other.kopecks - this->kopecks);
        }
        else {
            result.kopecks = this->kopecks - other.kopecks;
        }
        return result;
    }

    bool operator<(const Money& other) const {
        if (this->hryvnias == other.hryvnias) {
            return this->kopecks < other.kopecks;
        }
        return this->hryvnias < other.hryvnias;
    }

    bool operator==(const Money& other) const {
        return (hryvnias == other.hryvnias) && (kopecks == other.kopecks);
    }

    Money& operator++() {
        kopecks++;
        if (kopecks >= 100) {
            hryvnias++;
            kopecks -= 100;
        }
        return *this;
    }

    Money& operator--() {
        if (kopecks > 0) {
            kopecks--;
        }
        else {
            if (hryvnias > 0) {
                hryvnias--;
                kopecks = 99; // Переходимо на останню копійку
            }
        }
        return *this;
    }

    Money operator*(double factor) const {
        Money result;
        double totalCents = hryvnias * 100 + kopecks;
        totalCents *= factor;
        result.hryvnias = static_cast<long long>(totalCents / 100);
        result.kopecks = static_cast<unsigned int>(totalCents) % 100;
        return result;
    }

};


