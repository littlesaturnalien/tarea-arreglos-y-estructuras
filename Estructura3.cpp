/* Defina y declare una estructura para almacenar la información personal 
y profesional de 5 atletas olímpicos nicaragüenses. Utilice un ciclo para solicitar los 
datos al usuario, utilice un ciclo para imprimir los datos en pantalla y recuerde utilizar 
las funciones de E/S con el formato adecuado. En este ejercicio se deben anidar dos 
estructuras. */

#include <iostream>
using namespace std;

void estructura3();

int main(){

struct datosPersonales{
    string nombre;
    string cedula;
};

struct datosProfesionales{
    string deporte;
    string medallas;
};

struct atletaOlimpico{
    datosPersonales apartadoPersonal;
    datosProfesionales apartadoProfesional;
};

    atletaOlimpico Deporte[5];
    system("cls");

    for (int i = 0; i < 5; i++){
        cout<<"Ingrese el nombre del atleta #"<<i+1<<"."<<endl;
        cin.ignore();
        getline(cin, Deporte[i].apartadoPersonal.nombre);
        cout<<"Ingrese el numero de cedula."<<endl;
        cin>>Deporte[i].apartadoPersonal.cedula;
        cout<<"Ingrese el deporte en el participa el atleta."<<endl;
        cin>>Deporte[i].apartadoProfesional.deporte;
        cout<<"Ingrese las medallas que tiene."<<endl;
        cin>>Deporte[i].apartadoProfesional.medallas;
        system("cls");
    }
    
    cout<<"Informacion de los ultimos atletas ingresados."<<endl;
    for (int j = 0; j < 5; j++){
        cout<<"Atleta #"<<j+1<<endl;
        cout<<"Nombre: "<<Deporte[j].apartadoPersonal.nombre<<endl;
        cout<<"Cedula: "<<Deporte[j].apartadoPersonal.cedula<<endl;
        cout<<"Deporte: "<<Deporte[j].apartadoProfesional.deporte<<endl;
        cout<<"Medallas: "<<Deporte[j].apartadoProfesional.medallas<<endl;
        cout<<endl;
    }
    return 0;
}