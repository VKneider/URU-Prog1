#include <iostream>
using namespace std;

int main() {
    // Declaración de variable
    int edad = 20;

    // Condicional simple
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    bool tieneLicencia = true;

    // Condicionales con AND (&&) y OR (||)
    if (edad >= 18 && tieneLicencia) {
        cout << "Eres mayor de edad y tienes licencia de conducir." << endl;
    } else if (edad < 18 && tieneLicencia) {
        cout << "Eres menor de edad, pero tienes licencia de conducir." << endl;
    } else if (edad >= 18 || tieneLicencia) {
        cout << "Eres mayor de edad o tienes licencia de conducir." << endl;
    } else {
        cout << "No eres mayor de edad ni tienes licencia de conducir." << endl;
    }


    // Condicional anidado
    cout << "Condicionales anidados:" << endl;
    
    if(edad>=18){
        cout<<"Eres mayor de edad."<<endl;

        if(tieneLicencia){
            cout<<"Tienes licencia de conducir."<<endl;
        }else{
            cout<<"No tienes licencia de conducir."<<endl;
        }

    }else {
        cout<<"Eres menor de edad."<<endl;
    }

    return 0;
}
