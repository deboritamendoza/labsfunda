#include <iostream>
#include <stdbool.h>

using namespace std;

bool bisiesto(int n) {


    if( n % 4 != 0 || (n % 100 == 0 && n % 400!= 0) ) {

    return false;}

    else
{
     return true;
}

} 



   




int main (){

int n= 0;
bool retorno= 0;

cout<< "Ingrese el year:  "<< endl;
cin>> n;

bisiesto(n);

retorno = bisiesto(n);

if( retorno == false){

    cout <<"El year ingresado no es bisiesto"<<endl;
} else
{
    cout  <<"El year ingresado es bisiesto"<< endl;
}






    return 0;
}