#include <iostream>

using namespace std;


int main(){

int array[100], i=0 ,c= 0, n=0, buscar=0;

printf ("Digite el numero de elementos que desea ingresar: ");
scanf("%d" , &n); printf(" \n");

for (i = 0; i <n ; i++)
{
    printf( " Ingrese un numero:  [%d] ", i+1);
    scanf( "%d", &array[i]);
}
    printf("Que numero desea encontrar?");
    scanf( "%d", &buscar);
for ( i = 0; i < n; i++)
{ 
    if (array[i]== buscar)  c++;
    
} if (c != 0)

    (printf("El numero %d aparece %d veces en el arreglo \n", buscar,c ));

else
{
    printf("El numero %d no aparece en el arreglo \n",buscar);
}


 






    return 0;
}
