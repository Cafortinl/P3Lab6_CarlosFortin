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
        int numero, resul;
        string num;
    public:
        virtual string toString() = 0;
        /*virtual Numero* &operator+(Numero* n2) = 0;
        virtual Numero* &operator-(Numero* n2) = 0;
        virtual Numero* &operator*(Numero* n2) = 0;
        void suma(Numero* n1, Numero* n2);
        void resta(Numero* n1, Numero* n2);        
        void multiplicacion(Numero* n1, Numero* n2);*/
};
#endif

/*
Numero &operator+(Numero n2){
    suma(*this, n2);    
};
Numero &operator-(Numero n2){
    resta(*this, n2);
};
Numero &operator*(Numero n2){
    multiplicacion(*this, n2);
};
void suma(Numero n1, Numero n2);
void resta(Numero n1, Numero n2);        
void multiplicacion(Numero n1, Numero n2);

*/