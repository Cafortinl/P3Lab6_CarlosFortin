#pragma once
#ifndef HEXADECIMAL_HPP
#define HEXADECIMAL_HPP
#include "Numero.hpp"
#include "Binario.hpp"
#include "Octal.hpp"
#include <string>

using namespace std;

class Hexadecimal: public Numero{
    public:
        Hexadecimal(string n, string i);
        Hexadecimal &operator+(Hexadecimal n2);
        Hexadecimal &operator+(Binario n2);
        Hexadecimal &operator+(Octal n2);
        Hexadecimal &operator+(Decimal n2);
        Hexadecimal &operator-(Hexadecimal n2);
        Hexadecimal &operator-(Binario n2);
        Hexadecimal &operator-(Octal n2);
        Hexadecimal &operator-(Decimal n2);
        Hexadecimal &operator*(Hexadecimal n2);
        Hexadecimal &operator*(Binario n2);
        Hexadecimal &operator*(Octal n2);
        Hexadecimal &operator*(Decimal n2);
        int toDecimal(string n);
        string toString();
};
#endif