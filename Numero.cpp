#include "Numero.hpp"
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

Numero::Numero(string n, string i){
    num = n;
    identificador = i;
    //cout << identificador << endl;
    toDecimal();
    //cout << "entro" << endl;
    //cout << numero << endl;
}

void Numero::toDecimal(){
    //cout << "entro 2"<<endl;
    if(identificador == "b"){
        int t = 0;
        string temp = num.substr(0, num.size()-2);
        for(int i = temp.size()-1;i>=0;i--){
            if(temp[i] == '1'){
                numero+= 1*pow(2,t);
            }
            t++;
        }
    }else if(identificador == "0c"){
        int t = 0;
        string temp = num.substr(2, num.size()-1);
        for(int i = temp.size()-1;i>=0;i--){
            cout << t<< endl;
            numero+=1*pow(8,t) * (int)temp[i];
            t++;
        }

    }else if(identificador == "0x"){
        int t = 0;
        string temp = num.substr(2, num.size()-1);
        for(int i = temp.size()-1;i>=0;i--){
            cout << t << endl;
            if(temp[i] == 'A')
                numero+= 1*pow(16,t) * 10;
            else if(temp[i] == 'B')
                numero+=1*pow(16,t) * 11;
            else if(temp[i] == 'C')
                numero+=1*pow(16,t) * 12;
            else if(temp[i] == 'D')
                numero+=1*pow(16,t) * 13;
            else if(temp[i] == 'E')
                numero+=1*pow(16,t) * 14;
            else if(temp[i] == 'F')
                numero+=1*pow(16,t) * 15;
            else
                numero+=1*pow(16,t) * (int)temp[i];
            
            t++;
        }
    }else{
        numero = stoi(num);
    }
}

/*int Numero::suma(int n1, int n2){
    int r= n1 + n2;
    return r;
    //n1.toString();
}

int Numero::resta(int n1, int n2){
    int r= n1 + n2;
    return r;
    //n1.toString();
}

int Numero::multiplicacion(int n1, int n2){
    int r= n1 + n2;
    return r;
    //n1.toString();
}*/