#pragma once
#ifndef NUMERO_HPP
#define NUMERO_HPP
#include <string>

using namespace std;

class Numero{
    protected:
        string num;
        string identificador;
        void toDecimal();
        Numero(string n, string i);
    public:
        int numero, resul;
        Numero &operator+(Numero n2){
            suma(*this, n2);
        };
        Numero &operator-(Numero n2){
            resta(*this, n2);
        };
        Numero &operator*(Numero n2){
            multiplicacion(*this, n2);
        };
        virtual string toString();
        void suma(Numero n1, Numero n2);
        void resta(Numero n1, Numero n2);
        void multiplicacion(Numero n1, Numero n2);
};
#endif