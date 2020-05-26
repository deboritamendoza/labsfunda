#include <iostream>

using namespace std;

int main () {

int dividendo , divisor;

cout<<"*VERIFIQUE SI UN NUMERO ES DIVISIBLE ENTRE OTRO*"<< endl ;

cout<<"Ingrese el dividendo: ";
cin>>dividendo;

cout <<"Ingrese el divisor: ";
cin>> divisor;


if (dividendo % divisor == 0)
{
    cout<<"Si es divisible";

}
else
{
    cout<< "No es divisible";
}





    return 0;
}