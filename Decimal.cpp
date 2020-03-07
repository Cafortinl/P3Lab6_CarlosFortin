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

/*void Decimal::suma(int n1, int n2){
    n1 = n1 + n2;
    //n1.toString();
}

void Decimal::resta(int n1, int n2){
    n1 = n1 - n2;
    //cout << n1.resul << endl;
    //n1.toString();
}

void Decimal::multiplicacion(int n1, int n2){
    n1 = n1 * n2;
    //cout << n1.resul << endl;
    //n1.toString();
}*/