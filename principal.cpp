#include <iostream>
using namespace std;

#include <iostream>
#include "Arreglo1.cpp"
#include "Arreglo2.cpp"
#include "Estructura1.cpp"
#include "Estructura2.cpp"
#include "Estructura3.cpp"

using namespace std;

void regresarAlMenu();

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
    cin >> menuArreglos;
        switch (menuArreglos)
        {
        case 1: arreglo1(); regresarAlMenu(); break;
        
        case 2: arreglo2(); regresarAlMenu(); break;

        default:
            system("cls");
            cout << "Volviendo al menu principal..." << endl;
            cout << endl;
            main();
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
        case 1: estructura1(); regresarAlMenu(); break;

        case 2: estructura2(); regresarAlMenu(); break;

        case 3: estructura3(); regresarAlMenu(); break;

        default:
            system("cls");
            cout << "Volviendo al menu principal..." << endl;
            cout << endl;
            main();
            break;
        }
        break;

    case 3: cout << "El programa se ha finalizado." << endl;
        break;

    default:
        system("cls");
        cout << "Ingreso un numero invalido. Vuelva a intentarlo." << endl;
        main();
        break;
    }
    return 0;
}

void regresarAlMenu(){
    int opciones;
    cout<<endl;
    cout<<"Que deseas realizar ahora?: " << endl;
    cout<<"1. Volver al menu principal." << endl;
    cout<<"2. Salir"<<endl;
    cin>>opciones;
    switch (opciones){
    case 1:
        system("cls");
        main();
        break;
    
    case 2: cout<<"El programa ha finalizado." << endl;
        break;
    
    default:
        system("cls");
        cout<<"Ingreso un numero invalido. Vuelva a intentarlo." << endl;
        regresarAlMenu();
        break;
    }
}