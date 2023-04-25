/* Defina y declare una estructura para almacenar la información de los 
datos académicos y personales de los estudiantes de la carrera de Ingeniería en 
Sistemas de Información de la Universidad Centroamericana (UCA). Solicite los datos 
al usuario, utilice el ciclo apropiado para imprimir en pantalla la información 
almacenada y recuerde utilizar las funciones de E/S con el formato adecuado. */

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct estudiantesUCA{
    string nombreCompleto;
    int cif;
    int anio;
    int semestre;
    int cantClases;
};

int main(){
    int cant;
    cout << "Cuantos estudiantes de la UCA deseas ingresar?: ";
    cin >> cant;

    estudiantesUCA datos[cant];

    system("cls");

    for(int i = 0; i < cant; i++){
        cout << "Introduce la informacion del estudiante " << i+1 << ":" << endl;
        cin.ignore();
        cout << "Dime el nombre completo: ";
        getline(cin, datos[i].nombreCompleto);
        cout << "Ingrese su numero CIF: ";
        cin >> datos[i].cif;
        cout << "Ingrese la cantidad de clases que lleva el estudiante: ";
        cin >> datos[i].cantClases;
        cout << "Anio de la carrera: ";
        cin >> datos[i].anio;
        if(datos[i].anio > 5){
            cout << "El maximo de anios de la carrera es de 5 anios." << endl; exit(-1);
        }
        else{
            cout << "# de Semestre: ";
            cin >> datos[i].semestre;
            if(datos[i].anio == 1 && datos[i].semestre > 2){
                cout << "El 1er anio solo contiene el I y II semestre."; exit(-1);
            }
            else if(datos[i].anio == 2 && (datos[i].semestre < 3 || datos[i].semestre > 4)){
                cout << "El 2do anio solo contiene el III y IV semestre."; exit(-1);
            }
            else if(datos[i].anio == 3 && (datos[i].semestre < 5 || datos[i].semestre > 6)){
                cout << "El 3er anio solo contiene el V y VI semestre."; exit(-1);
            }
            else if(datos[i].anio == 4 && (datos[i].semestre < 7 || datos[i].semestre > 8)){
                cout << "El 4to anio solo contiene el VII y VII semestre."; exit(-1);
            }
            else if(datos[i].anio == 5 && (datos[i].semestre < 9 || datos[i].semestre > 10)){
                cout << "El 5to anio solo contiene el IX y X semestre."; exit(-1);
            }
        }
        cout << endl;
    }

    system("cls");

    cout << "INFORMACION DE LOS ESTUDIANTES DE LA UCA: " << endl;
    cout << endl;
    for(int j = 0; j < cant; j++){
        cout << "Estudiante " << j+1 << ":" << endl;
        cout << "Nombre completo: " << datos[j].nombreCompleto << endl;
        cout << "CIF: " << datos[j].cif << endl;
        cout << "Anio de la carrera: " << datos[j].anio << endl;
        cout << "# de Semestre: " << datos[j].semestre << endl;
        cout << endl;
    }
    return 0;
}