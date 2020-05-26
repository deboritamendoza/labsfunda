#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

char L1 (char* cadena)

{
    return cadena [0]; //Posicion 0 = Primera letra. 
    
 }

char L2 (char* cadena)

{

    return cadena [strlen ( cadena )-1];
}

 

int main () {

  

char palabra [20];
char word [20];

char ultima[20];
char primera[20];


printf(" Inserte una palabra: ");
scanf ( "%s" , palabra);
 printf ("La primera letra es:  %c\n  " , L1 (palabra));


  strcpy( word , palabra);


  printf ("La ultima letra es: %c  ", L2 (word));




if ( ( "%c\n  " , L1 (palabra)) == (" %c  ", L2 (word)))
{
    cout<< "Inicia y temina con la MISMA letra.";
}
else
{
    cout<<"Inicia y finaliza con DIFERENTE letra.";
}

getch ();

    return 0;
}












