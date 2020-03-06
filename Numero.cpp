#include "Numero.hpp"
#include <string>
#include <math.h>

using namespace std;

Numero::Numero(string n, string i){
    num = n;
    identificador = i;
}

void Numero::toDecimal(){
    if(identificador == "b"){
        int t = 0;
        string temp = num.substr(0, num.size()-2);
        for(int i = temp.size()-1;i>=0;i--){
            if(temp[i] == '1'){
                numero+=pow(2,t);
            }
            t++;
        }
    }else if(identificador == "0x"){
        int t = 0;
        string temp = num.substr(2, num.size()-1);
        for(int i = temp.size()-1;i>=0;i--){
            if(temp[i] == '1')
                numero+=pow(2,t);

            t++;
        }

    }else if(identificador == "0c"){

    }else{
        numero = stoi(num);
    }
}