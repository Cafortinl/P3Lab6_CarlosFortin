#include "Numero.hpp"
#include "Binario.hpp"
#include "Decimal.hpp"
#include "Octal.hpp"
#include "Hexadecimal.hpp"

Hexadecimal::Hexadecimal(string n, string i) : Numero(n,i){
}

string Hexadecimal::toString(){
    string temp;
    while(resul >= 2){
        if(resul % 2 == 0)
            temp += "0";
        else
            temp += "1";
        
        resul/=2;
    }
    return temp;
}