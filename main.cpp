#include <iostream>
#include <vector>
#include <string>
#include "Numero.hpp"
#include "Binario.hpp"
#include "Decimal.hpp"
#include "Octal.hpp"
#include "Hexadecimal.hpp"

using namespace std;

vector<Numero> numeros;
char idBin;
string id;

bool valido(string x){
    bool v = false;
    bool num = true;
    idBin = x[x.size()-1];
    id = x.substr(0,1);
    for(int i = 0;i<x.size();i++){
        if(x[i] != 'A' || x[i] != 'B' || x[i] != 'C' || x[i] != 'D' || x[i] != 'E' || x[i] != 'F' || x[i] != 'c' || x[i] != 'x' || x[i] != '0' || x[i] != '1' || x[i] != '2' || x[i] != '3' || x[i] != '4' || x[i] != '5' || x[i] != '6' || x[i] != '7' || x[i] != '8' || x[i] != '9'){
            num = false;
            break;
        }
    }
    if(num){
        if(idBin == 'b'){
            bool bin = true;
            for(int j = 0;j<x.size()-1;j++){
                if(x[j] != '0' || x[j] != '1'){
                    bin = false;
                    break;
                }
                if(bin){
                    v = true;
                    id = " ";
                }
            }

        }else if(id == "0c"){
            v = true;
            idBin = ' ';
        }else if(id == "0x"){
            v = true;
            idBin = ' ';
        }else{
            v = true;
            idBin = ' ';
        }
    }
    return v;
}

void opciones(int x){
    switch(x){
        case 1:{
            string numS;
            cout << "Ingrese un numero: ";
            cin >> numS;
            while(!valido(numS)){
                cout << "El numero ingresado no es valido, ingrese otro numero: ";
                cin >> numS;
                valido(numS);
            }
            if(idBin != ' '){
                string s = numS.substr(0,numS.size()-2), i = to_string(idBin);
                Binario b(s, i);
                numeros.push_back(b);
            }else if(id == "0c"){
                string s = numS.substr(2, numS.size()-1);
                Octal o(s,id);
                numeros.push_back(o);
            }else if(id == "0x"){
                string s = numS.substr(2, numS.size()-1);
                Hexadecimal h(s,id);
                numeros.push_back(h);
            }else{
                Decimal d(numS, id);
                numeros.push_back(d);
            }
            break;
        }

        case 2:{
            break;
        }

        case 3:{
            break;
        }
        
        case 0:{
            break;
        }

        default:{
            cout << "La opcion ingresada no es valida" << endl;
            break;
        }
    }
}

void mostrarOpciones(){
    cout << "----------Menu----------" << endl;
    cout << "1. Ingresar Numero" << endl;
    cout << "2. Listar Numeros" << endl;
    cout << "3. Operacion" << endl;
    cout << "0. Salir";
}

int main(){
    int opcion = 0;
    do{
        mostrarOpciones();
        cin >> opcion;
    }while(opcion != 0);
    cout << "Fin del programa" << endl;
    return 0;
}