#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include <string>

using namespace std;

Hexadecimal::Hexadecimal(string n, string i) : Numero(n,i){
}

string Hexadecimal::toString(){
    string temp = "";
    string temp2 = "";
    int div = resul, mod;
    while(div > 0){
        mod = (div % 16) *16;
        div/=16;

        switch(mod){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:{
                temp2+=to_string(mod);
                break;
            }

            case 10:{
                temp2+="A";
                break;
            }

            case 11:{
                temp2+="B";
                break;
            }

            case 12:{
                temp2+="C";
                break;
            }

            case 13:{
                temp2+="D";
                break;
            }

            case 14:{
                temp2+="E";
                break;
            }

            case 15:{
                temp2+="F";
                break;
            }
        } 
    }
    int t2 = temp2.size()-1;
    for(int i = 0;i<temp2.size();i++){
        temp[i] = temp2[t2];
        t2--;
    }
    return temp;
}