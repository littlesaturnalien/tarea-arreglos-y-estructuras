#include <iostream>
using namespace std;

#include <iostream>
#include "Arreglo1.cpp"
#include "Arreglo2.cpp"
#include "Estructura1.cpp"
#include "Estructura2.cpp"
#include "Estructura3.cpp"

using namespace std;

int main()
{
    int menu;
    cout << "Menu: " << endl;
    cout << "1. Arreglos" << endl;
    cout << "2. Estructuras" <<endl;
    cout << "3. Salir" << endl;
    cin >> menu;

    system("cls");
     switch (menu)
    {
    case 1: 
    int menuArreglos;
    cout << "Elige nuevamente: " << endl;
    cout << "Tabla de arreglos #1" << endl;
    cout << "Tabla de arreglos #2" << endl;
    cout << "Tabla de arreglos #3" << endl;
    cin >> menuArreglos;
        switch (menuArreglos)
        {
        case 1:
            void arreglo1();
            break;
        
        case 2: 
            
            break;

        case 3:
            
            break;
        
        default:
            break;
        }
        break;
    case 2: 
    int menuEstructuras;
    cout << "Elige nuevamente: " << endl;
    cout << "1. Base de datos de empresa Conico" << endl;
    cout << "2. Base de datos estudiantes de la UCA" << endl;
    cout << "3. Base de datos de atletas nicaraguenses" << endl;
    cin >> menuEstructuras;
        switch (menuEstructuras)
        {
        case 1:
            
            break;

        case 2: 
            
            break;

        case 3: 
        break;
        
        default:
            break;
        }

    break;
    default:
        break;
    }
    return 0;
}