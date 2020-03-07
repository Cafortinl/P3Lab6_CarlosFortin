#pragma once
#ifndef BINARIO_HPP
#define BINARIO_HPP
#include "Numero.hpp"
#include <string>

using namespace std;

class Binario: public Numero{
    public:
        Binario(string n, string i);
        string toString();
        
};
#endif