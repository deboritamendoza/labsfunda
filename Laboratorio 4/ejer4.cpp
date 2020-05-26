#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main () {
char palabra [30];
int longitud=0;

cout<<"Ingrese palabra: "<<endl;
cin>>palabra ;

longitud = strlen (palabra) ;

if (longitud == 10)
{
    cout<<"la palabra tiene 10 caracteres"<<endl;
}

else
{
    if (longitud > 10 )
{
    cout<< "~Mayor a 10 caracteres~" <<endl ;
}
else
{
    cout<< "~Menor a 10 caracteres~"<< endl ;
}

}


cout<<" La longitud es par o impar?" <<endl;

if (longitud %2 == 0)
{
   cout<< "La longitud es PAR";
}

else
{
    cout<< "La longitud es IMPAR";
}




    return 0;
}