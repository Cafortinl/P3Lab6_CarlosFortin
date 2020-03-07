#pragma once
#ifndef DECIMAL_HPP
#define DECIMAL_HPP
#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include "Binario.hpp"
#include "Octal.hpp"
#include <string>

using namespace std;

class Decimal: public Numero{
    public:
        Decimal(string n, string i);
        /*Decimal &operator+(Decimal n2){
            this->resul = suma(this->numero, n2.numero);
            toString();
        };
        Decimal &operator+(Hexadecimal n2){
            this->resul = suma(this->numero, n2.numero);
            toString();
        };
        Decimal &operator+(Octal n2){
            this->resul = suma(this->numero, n2.numero);
            toString();
        };
        Decimal &operator+(Binario n2);
        Decimal &operator-(Decimal n2);
        Decimal &operator-(Hexadecimal n2);
        Decimal &operator-(Octal n2);
        Decimal &operator-(Binario n2);
        Decimal &operator*(Decimal n2);
        Decimal &operator*(Hexadecimal n2);
        Decimal &operator*(Octal n2);
        Decimal &operator*(Binario n2);*/
        //void resta(int *n1, int *n2);        
        //void multiplicacion(int *n1, *int n2);
        string toString();
        int suma(int n1, int n2);
};
#endif 