#include "Numero.hpp"
#include "Binario.hpp"
#include "Decimal.hpp"
#include "Octal.hpp"
#include "Hexadecimal.hpp"

Binario::Binario(string n, string i) : Numero(n,i){
}

string Binario::toString(){
    string temp;
    while(resul >= 2){
        if(resul % 2 == 0)
            temp += "0";
        else
            temp += "1";
    }
    return temp;
}