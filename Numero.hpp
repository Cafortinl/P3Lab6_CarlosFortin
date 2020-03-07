#pragma once
#ifndef NUMERO_HPP
#define NUMERO_HPP
#include <string>

using namespace std;

class Numero{
    protected:
        string identificador;
        void toDecimal();
        Numero(string n, string i);
    public:
        int numero, resul = 0;
        string num;
        virtual string toString();
        Numero operator+(Numero n2){
            (*this).resul = (*this).numero + n2.numero;
            (*this).toString();
        };
        Numero operator-(Numero n2){
            (*this).resul = (*this).numero - n2.numero;
            (*this).toString();
        };
        Numero operator*(Numero n2){
            (*this).resul = (*this).numero * n2.numero;
            (*this).toString();
        };
        
};
#endif