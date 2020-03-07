#include "Decimal.hpp"
#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include "Binario.hpp"
#include "Octal.hpp"
#include <string>

using namespace std;

Decimal::Decimal(string n, string i) : Numero(n,i){
}

string Decimal::toString(){
    string temp;
    temp = to_string(resul);
    return temp;
}