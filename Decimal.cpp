#include "Numero.hpp"
#include "Binario.hpp"
#include "Decimal.hpp"
#include "Octal.hpp"
#include "Hexadecimal.hpp"

Decimal::Decimal(string n, string i) : Numero(n,i){
}

string Decimal::toString(){
    string temp;
    temp = to_string(resul);
    return temp;
}