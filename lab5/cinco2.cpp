#include <iostream>
#include <windows.h>

using namespace std;


int main (){

int h , m , s;

char c;

cout<< "Ingrese la hora en formato de 24 horas hh: mm:ss \n" <<endl;
cout<<"Separe cada marcador con 2 puntos :" <<endl;


cin>> h >> c >> m >> c >> s;

s= s + 1;

if(s >= 60){

    s=00;
    m = m+1;
    if (m >=60){

        m = 00;
        h = h +1 ;
        if(h >= 24){

            h=00;
        }
    }
}

Sleep(1000);

cout << h <<":" << m << ":" << s <<endl;





    return 0;
}