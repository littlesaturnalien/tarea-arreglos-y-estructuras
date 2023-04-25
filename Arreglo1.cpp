#include <iostream>
#include <string.h>
using namespace std;

void arreglo1();

void arreglo1(){
    string vector[11]={"0", "1", "5", "7", "-", "M", "P", "2", "0", "2", "3"};
    for(int i = 0; i < 11; i++){
        cout << vector[i] << " ";
    }
    cout << endl;
}