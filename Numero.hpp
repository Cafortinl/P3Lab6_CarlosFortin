#pragma once
#ifndef NUMERO_HPP
#define NUMERO_HPP
#include <string>

using namespace std;

class Numero{
    protected:
        string num;
        int numero;
        string identificador;
        void toDecimal();
        Numero(string n, string i);
    public:
        virtual string toString();
};
#endif