#pragma once
#ifndef DECIMAL_HPP
#define DECIMAL_HPP
#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include "Octal.hpp"
#include "Binario.hpp"
#include <string>

using namespace std;

class Decimal: public Numero{
    public:
        int n;
        Decimal(string n, string i);
        Decimal &operator+(Decimal n2);
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
        Decimal &operator*(Binario n2);
        string toString();
};
#endif