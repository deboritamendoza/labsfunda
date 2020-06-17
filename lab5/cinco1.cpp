#include <iostream>
#include <math.h>

using namespace std;

int mcd( int a, int b){

if(a==0){
    return b;}

return mcd ( b % a ,a);
}



int main (){

    int a, b;

    cout<< "Ingrese un numero:"<< endl;
cin>>a;

cout <<"Ingrese otro numero: "<< endl;
cin >> b;

cout <<"El MAXIMO COMUN DIVISOR ES:  "<< mcd(a,b);
   

    return 0;

}