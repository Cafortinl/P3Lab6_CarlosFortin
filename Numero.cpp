#include "Numero.hpp"
#include <string>
#include <math.h>

using namespace std;

Numero::Numero(string n, string i){
    num = n;
    identificador = i;
    toDecimal();
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
            numero+=pow(8,t) * temp[i];
            t++;
        }

    }else if(identificador == "0c"){
        int t = 0;
        string temp = num.substr(2, num.size()-1);
        for(int i = temp.size()-1;i>=0;i--){
            if(temp[i] == 'A')
                numero+=pow(16,t) * 10;
            else if(temp[i] == 'B')
                numero+=pow(16,t) * 11;
            else if(temp[i] == 'C')
                numero+=pow(16,t) * 12;
            else if(temp[i] == 'D')
                numero+=pow(16,t) * 13;
            else if(temp[i] == 'E')
                numero+=pow(16,t) * 14;
            else if(temp[i] == 'F')
                numero+=pow(16,t) * 15;
            else
                numero+=pow(16,t) * temp[i];
            
            t++;
        }
    }else{
        numero = stoi(num);
    }
}

void suma(Numero n1, Numero n2){
    n1.resul = n1.numero + n2.numero;
    n1.toString();
}

void resta(Numero n1, Numero n2){
    n1.resul = n1.numero - n2.numero;
    n1.toString();
}

void multiplicacion(Numero n1, Numero n2){
    n1.resul = n1.numero * n2.numero;
    n1.toString();
}