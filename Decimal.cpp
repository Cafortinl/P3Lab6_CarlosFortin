#include "Decimal.hpp"
#include "Numero.hpp"
#include <string>

using namespace std;

Decimal::Decimal(string n, string i) : Numero(n,i){
}

string Decimal::toString(){
    string temp;
    temp = to_string(resul);
    return temp;
}