#include <iostream>
#include <string.h>
using namespace std;

void arreglo3();


void arreglo3(){
    string array[50];

    cout << "Escriba la letra L: ";
    cin >> array[0];
    cout << "Escriba la letra a: ";
    cin >> array[1];
    cout << "Escriba la letra p: ";
    cin >> array[2];
    cout << "Escriba la letra i: ";
    cin >> array[3];
    cout << "Escriba la letra z: ";
    cin >> array[4];
    cout << endl;

    cout << "Escriba la letra B: ";
    cin >> array[10];
    cout << "Escriba la letra o: ";
    cin >> array[11];
    cout << "Escriba la letra r: ";
    cin >> array[12];
    cout << "Escriba la letra r: ";
    cin >> array[13];
    cout << "Escriba la letra a: ";
    cin >> array[14];
    cout << "Escriba la letra d: ";
    cin >> array[15];
    cout << "Escriba la letra o: ";
    cin >> array[16];
    cout << "Escriba la letra r: ";
    cin >> array[17];
    cout << endl;

    cout << "Escriba la letra R: ";
    cin >> array[20];
    cout << "Escriba la letra e: ";
    cin >> array[21];
    cout << "Escriba la letra g: ";
    cin >> array[22];
    cout << "Escriba la letra l: ";
    cin >> array[23];
    cout << "Escribe la letra a: ";
    cin >> array[24];
    cout << endl;

    cout << "Escribe la letra T: ";
    cin >> array[30];
    cout << "Escribe la letra a: ";
    cin >> array[31];
    cout << "Escribe la letra j: ";
    cin >> array[32];
    cout << "Escribe la letra a: ";
    cin >> array[33];
    cout << "Escribe la letra d: ";
    cin >> array[34];
    cout << "Escribe la letra o: ";
    cin >> array[35];
    cout << "Ecribe la letra r: ";
    cin >> array[36];
    cout << endl;

    cout << "Escribe la letra M: ";
    cin >> array[40];
    cout << "Escribe la letra o: ";
    cin >> array[41];
    cout << "Escribe la letra c: ";
    cin >> array[42];
    cout << "Escribe la letra h: ";
    cin >> array[43];
    cout << "Escribe la letra i: ";
    cin >> array[44];
    cout << "Escribe la letra l: ";
    cin >> array[45];
    cout << "Escribe la letra a: ";
    cin >> array[46];
    
    system("cls");
    for(int i = 0; i <= 5; i++){
        cout << array[i];
    }
    cout << endl;
    for(int j = 9; j <= 17; j++){
        cout << array[j];
    }
    cout << endl;
    for(int k = 19; k <= 24; k++){
        cout << array[k];
    }
    cout << endl;
    for(int l = 29; l <= 36; l++){
        cout << array[l];
    }
    cout << endl;
    for(int m = 39; m <= 46; m++){
        cout << array[m];
    }
    cout << endl;
}