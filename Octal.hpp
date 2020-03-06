#pragma once
#ifndef OCTAL_HPP
#define OCTAL_HPP
#include "Numero.hpp"
#include "Binario.hpp"
#include "Hexadecimal.hpp"
#include <string>

using namespace std;

class Octal: public Numero{
    public:
        Octal(string n, string i);
        /*Octal &operator+(Octal n2);
        Octal &operator+(Hexadecimal n2);
        Octal &operator+(Decimal n2);
        Octal &operator+(Binario n2);
        Octal &operator-(Octal n2);
        Octal &operator-(Hexadecimal n2);
        Octal &operator-(Decimal n2);
        Octal &operator-(Binario n2);
        Octal &operator*(Octal n2);
        Octal &operator*(Hexadecimal n2);
        Octal &operator*(Decimal n2);
        Octal &operator*(Binario n2);*/
        string toString();
};
#endif