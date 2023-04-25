/* Defina, declare e inicialice una estructura para almacenar la información 
de los dispositivos electrónicos (celular, tablet, Smart tv, laptop etc.) que distribuye la 
empresa “Conico”. Utilice el ciclo apropiado para imprimir en pantalla información 
almacenada en la estructura y recuerde utilizar las funciones de E/S con el formato 
adecuado. */

#include <iostream>
using namespace std;

void estructura1();

void estructura1(){
struct Celular{
    char marca[100];
    char modelo[100];
    char precio[100];
    char color[100];
    char espacio[100];
    char disponibles[100];
};

struct Tablet{
    char marca[100];
    char modelo[100];
    char precio[100];
    char color[100];
    char espacio[100];
    char disponibles[100];
};

struct SmartTV{
    char marca[100];
    char modelo[100];
    char precio[100];
    char tamanio[100];
    char disponibles[100];
};

struct Laptops{
    char marca[100];
    char precio[100];
    char ram[100];
    char almacenamiento[100];
    char procesador[100];
    char tamanio[100];
    char disponibles[100];
};

    Celular Cel[] ={
        {"Samsung", "S21+", "679 Dolares", "Rojo", "126 GB", "06 Disponibles"},
        {"Apple", "iPhone 14 Pro", "1449 Dolares", "Blanco", "256 GB","21 Disponibles"}
    };
    cout << "INFORMACION DE LOS DISPOSITIVOS DE CONICO:" << endl;
    cout << endl;
    cout<<"---------- Inicio del Inventario de Celulares ----------"<<endl;
    cout<<endl;
    for (int i = 0; i < 2; i++){
        cout << "Dipositivo " << i + 1 << ":" << endl;
        cout << "Marca: " << Cel[i].marca<< endl;
        cout << "Modelo: "<<Cel[i].modelo<< endl;
        cout << "Precio:  "<<Cel[i].precio<<endl;
        cout << "Color: "<<Cel[i].color<< endl;
        cout << "Capacidad de espacio: "<<Cel[i].espacio<< endl;
        cout << "Cantidad disponible: "<<Cel[i].disponibles<<endl;
        cout << endl;   
    }
    cout<<endl;
    cout<<"---------- Fin del Inventario de Celulares ----------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"---------- Inicio del Inventario de Tablets ----------"<<endl;
    cout<<endl;
    Tablet Tab[] = {
        {"Samsung", "Galaxy Tab S8+", "929 Dolares", "Negro", "256 GB", "21 Disponibles"},
        {"Apple", "iPad Pro 2022", "1794 Dolares", "Gris Espacial", "1T","05 Disponibles"}
    };
    for (int i = 0; i < 2; i++){ 
        cout << "Dipositivo " << i + 1 << ":" << endl;
        cout << "Marca: " << Tab[i].marca<< endl;
        cout << "Modelo: "<<Tab[i].modelo<< endl;
        cout << "Precio:  "<<Tab[i].precio<<endl;
        cout << "Color: "<<Tab[i].color<< endl;
        cout << "Capacidad de espacio: "<<Tab[i].espacio<< endl;
        cout << "Cantidad disponible: "<<Tab[i].disponibles<<endl;
        cout<<endl;
    }
    cout<<endl;
    cout<<"---------- Fin del Inventario de Tablets ----------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"---------- Inicio del Inventario de SmartTV ----------"<<endl;
    cout<<endl;
    SmartTV Tele[] = {
        {"Samsung", "Televisor Smart TV", "799 Dolares", "50 Pulgadas", "04 Disponibles"},
        {"TCL", "Televisor Smart TV", "275 Dolares", "40 Pulgadas", "01 Disponibles"}
    };
    for (int i = 0; i < 2; i++){
        cout << "Dipositivo " << i + 1 << ":" << endl;
        cout << "Marca: " << Tele[i].marca<< endl;
        cout << "Modelo: "<<Tele[i].modelo<< endl;
        cout << "Precio:  "<<Tele[i].precio<<endl;
        cout << "Tamanio: "<<Tele[i].tamanio<< endl;
        cout << "Cantidad disponible: "<<Tele[i].disponibles<<endl;
        cout<<endl;
    }
    cout<<endl;
    cout<<"---------- Fin del Inventario de SmartTV ----------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"---------- Inicio del Inventario de Laptops ----------"<<endl;
    cout<<endl;
    Laptops Lap[] ={
        {"HP", "289 Dolares", "4 GB RAM", "SSD 64 GB", "Intel Celeron N4000","14 Pulgadas","21 Disponiles"},
        {"Dell", "419 Dolares", "16 GB RAM", "SSD 1 TB", "Intel Celeron N4020","15.6 Pulgadas", "07 Disponibles"}
    };
    for (int i = 0; i < 2; i++){
        cout << "Dipositivo " << i + 1 << ":" << endl;
        cout << "Marca: " << Lap[i].marca<< endl;
        cout << "Precio:  "<<Lap[i].precio<<endl;
        cout << "Memoria RAM: "<<Lap[i].ram<< endl;
        cout << "Almacenamiento: " << Lap[i].almacenamiento << endl;
        cout << "Procesador: " << Lap[i].procesador << endl;
        cout << "Tamanio: " << Lap[i].tamanio << endl;
        cout << "Cantidad disponible: "<<Lap[i].disponibles<<endl;
        cout<<endl;
    }
    cout<<endl;
    cout<<"---------- Fin del Inventario de Laptops ----------"<<endl;
    cout<<endl;
}