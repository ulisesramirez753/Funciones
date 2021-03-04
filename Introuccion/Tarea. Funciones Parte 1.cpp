// RAMIREZ VAZQUEZ ULISES GRUPO: 2AV6
// Funciones Parte 1

#include <iostream>
#include <cmath>
#include <cstdlib>

void ImprimirEdad (int);
int main ()
{
    using namespace std;
    int edad;
    cout << "¿Cual es tu edad?";
    cin >> edad;
    ImprimirEdad (edad);
    system ("pause");
    return 0;

}

void ImprimirEdad(int miEdad){
    using namespace std;
    cout <<"Tu edad es" << miEdad << endl;
}
