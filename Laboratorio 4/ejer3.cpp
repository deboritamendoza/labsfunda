#include <iostream>

using namespace std;

int main () {

    int num;

    cout<< " *DETERMINE SI EL NUMERO ES POSITIVO,NEGATIVO O CERO* "<< endl;

    cout<<"Ingrese un numero entero : ";
    cin>> num;

    

     if (num == 0)
     {
         cout<<"El numero ingresado es *CERO* ";
     }

     else
     {
         if  (num > 0)
    {
        cout<< "El numero ingresado es *POSITIVO* ";
    }
     else
     {
         cout<< "El numero ingresado es *NEGATIVO* ";
        
     
         }
         
     }
     
     
     








    return 0 ;
}