#pragma once
#ifndef NUMERO_HPP
#define NUMERO_HPP
#include <string>

using namespace std;

class Numero{
    protected:
        string num;
        string identificador;
    public:
        Numero(string n);
        Numero &operator+(Numero);
        virtual string toString();
};
#endif