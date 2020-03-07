#include "Numero.hpp"
#include "Octal.hpp"
#include <string>

using namespace std;

Octal::Octal(string n, string i) : Numero(n,i){
}

string Octal::toString(){
    string temp = "";
    string temp2 = "";
    int div = resul, mod;
    while(div > 0){
        mod = (div % 8) * 8;
        div/=8;
        temp2+=to_string(mod);
    }
    int t2 = temp2.size()-1;
    for(int i = 0;i<temp2.size();i++){
        temp[i] = temp2[t2];
        t2--;
    }
    return temp;
}