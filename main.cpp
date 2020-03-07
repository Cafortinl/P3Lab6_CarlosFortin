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
vector<string> ns;
char idBin;
string id;

void operaciones(int x){
    switch(x){
        case 1:{
            int n1, n2;
            for(int i=0;i<numeros.size();i++){
                cout << i << "-" << ns[i] << endl;
            }
            cout << "Ingrese la posicion del primer numero: ";
            cin >> n1;
            cout << "Ingrese la posicion del segundo numero: ";
            cin >> n2;
            numeros[n1] + numeros[n2];
        }

        case 2:{
            int n1, n2;
            for(int i=0;i<numeros.size();i++){
                cout << i << "-" << ns[i] << endl;
            }
            cout << "Ingrese la posicion del primer numero: ";
            cin >> n1;
            cout << "Ingrese la posicion del segundo numero: ";
            cin >> n2;
            numeros[n1] - numeros[n2];
            break;
        }

        case 3:{
            int n1, n2;
            for(int i=0;i<numeros.size();i++){
                cout << i << "-" << ns[i] << endl;
            }
            cout << "Ingrese la posicion del primer numero: ";
            cin >> n1;
            cout << "Ingrese la posicion del segundo numero: ";
            cin >> n2;
            numeros[n1] * numeros[n2];
            break;
        }
    }
}

void mostrarOperaciones(){
    cout << "----------Operaciones----------" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
}

bool valido(string x){
    bool v = false;
    bool num = true;
    idBin = x.size()-1;
    id = x.substr(0,1);
    for(int i = 0;i<x.size();i++){
        if(x[i] != 'A' && x[i] != 'B' && x[i] != 'C' && x[i] != 'D' && x[i] != 'E' && x[i] != 'F' && x[i] != 'c' && x[i] != 'x' && x[i] != '0' && x[i] != '1' && x[i] != '2' && x[i] != '3' && x[i] != '4' && x[i] != '5' && x[i] != '6' && x[i] != '7' && x[i] != '8' && x[i] != '9' && x[i] != 'b'){
            num = false;
            //cout << "no valido" << endl;
            break;
        }
    }
    if(num){
        if(idBin == 'b'){
            //cout << "entro" << endl;
            bool bin = true;
            for(int j = 0;j<x.size()-2;j++){
                if(x[j] != '0' && x[j] != '1'){
                    bin = false;
                    break;
                }
            }
            if(bin){
                v = true;
                //id = " ";
            }

        }else if(id == "0c"){
            v = true;
            idBin = 'x';
        }else if(id == "0x"){
            v = true;
            idBin = 'x';
        }else{
            v = true;
            idBin = 'x';
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
            if(idBin != 'x' && id == " "){
                string s = numS.substr(0,numS.size()-2), i;
                i[0] = idBin;
                //Binario b(s, i);
                numeros.push_back(Binario(s,i));
                ns.push_back(numS);
            }else if(id == "0c"){
                string s = numS.substr(2, numS.size()-1);
                //Octal o(s,id);
                numeros.push_back(Octal(s,numS.substr(0,1)));
                ns.push_back(numS);
            }else if(id == "0x"){
                string s = numS.substr(2, numS.size()-1);
                //Hexadecimal h(s,id);
                numeros.push_back(Hexadecimal(s,numS.substr(0,1)));
                ns.push_back(numS);
            }else{
                //Decimal d(numS, id);
                numeros.push_back(Decimal(numS, numS.substr(0,1)));
                ns.push_back(numS);
            }
            break;
        }

        case 2:{
            for(int i=0;i<numeros.size();i++){
                cout << i << "-" << ns[i] << endl;
            }
            break;
        }

        case 3:{
            int o;
            mostrarOperaciones();
            cin >> o;
            operaciones(o);
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
    cout << "0. Salir" << endl;
}

int main(){
    int opcion = 0;
    do{
        mostrarOpciones();
        cin >> opcion;
        opciones(opcion);
    }while(opcion != 0);
    cout << "Fin del programa" << endl;
    return 0;
}

/*
if(nn.back() == 'b'){
                string s = nn.substr(0,nn.size()-2), i;
                i[0] = bin1;
                Binario b(s, i);
                if(nn2.back() == 'b'){
                    string s = nn.substr(0,nn2.size()-2), i;
                    i[0] = bin2;
                    Binario b2(s, i);
                    //b+b2;
                }else if(iid2 == "0c"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Octal o2(s,id);
                    //b+o2;
                }else if(iid2 == "0x"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Hexadecimal h2(s,id);
                    //b+h2;
                }else{
                    Decimal d2(nn2, id);
                    //b+d2;
                }
            }else if(iid == "0c"){
                string s = nn.substr(2, nn.size()-1);
                Octal o(s,id);
                if(bin2 == 'b'){
                    string s = nn.substr(0,nn2.size()-2), i;
                    i[0] = bin2;
                    Binario b2(s, i);
                    //o+b2;
                }else if(iid2 == "0c"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Octal o2(s,id);
                    //o+o2;
                }else if(iid2 == "0x"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Hexadecimal h2(s,id);
                    //o+h2;
                }else{
                    Decimal d2(nn2, id);
                    //o+d2;
                }
            }else if(iid == "0x"){
                string s = nn.substr(2, nn.size()-1);
                Hexadecimal h(s,id);
                if(bin2 == 'b'){
                    string s = nn.substr(0,nn2.size()-2), i;
                    i[0] = bin2;
                    Binario b2(s, i);
                    //h+b2;
                }else if(iid2 == "0c"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Octal o2(s,id);
                    //h+o2;
                }else if(iid2 == "0x"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Hexadecimal h2(s,id);
                    //h+h2;
                }else{
                    Decimal d2(nn2, id);
                    //h+d2;
                }
            }else{
                Decimal d(nn, id);
                if(bin2 == 'b'){
                    string s = nn.substr(0,nn2.size()-2), i;
                    i[0] = bin2;
                    Binario b2(s, i);
                    //d+b2;
                }else if(iid2 == "0c"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Octal o2(s,id);
                    //d+o2;
                }else if(iid2 == "0x"){
                    string s = nn2.substr(2, nn2.size()-1);
                    Hexadecimal h2(s,id);
                    d+h2;
                }else{
                    Decimal d2(nn2, id);
                    d+d2;
                }
            }
*/