#pragma once
#ifndef DECIMAL_HPP
#define DECIMAL_HPP
#include "Numero.hpp"
#include <string>

using namespace std;

class Decimal: public Numero{
    public:
        Decimal(string n, string i);
        /*Decimal &operator+(Decimal n2);
        Decimal &operator+(Hexadecimal n2);
        Decimal &operator+(Octal n2);
        Decimal &operator+(Binario n2);
        Decimal &operator-(Decimal n2);
        Decimal &operator-(Hexadecimal n2);
        Decimal &operator-(Octal n2);
        Decimal &operator-(Binario n2);
        Decimal &operator*(Decimal n2);
        Decimal &operator*(Hexadecimal n2);
        Decimal &operator*(Octal n2);
        Decimal &operator*(Binario n2);*/
        string toString();
};
#endif