#pragma once
#ifndef BINARIO_HPP
#define BINARIO_HPP
#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include "Octal.hpp"
#include "Decimal.hpp"
#include <string>

using namespace std;

class Binario: public Numero{
    public:
        int num;
        Binario(string n, string i);
        Binario &operator+(Binario n2);
        Binario &operator+(Hexadecimal n2);
        Binario &operator+(Octal n2);
        Binario &operator+(Decimal n2);
        Binario &operator-(Binario n2);
        Binario &operator-(Hexadecimal n2);
        Binario &operator-(Octal n2);
        Binario &operator-(Decimal n2);
        Binario &operator*(Binario n2);
        Binario &operator*(Hexadecimal n2);
        Binario &operator*(Octal n2);
        Binario &operator*(Decimal n2);
        int toDecimal(string n);
        string toString();
        void suma(Numero n2);
};
#endif