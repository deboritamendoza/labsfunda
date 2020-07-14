#include <iostream>
#include <stdio.h>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
char nombreArticul [longCad + 1];
int cantidad ;
float precio;
float costoPorArticulo;
} ;

void rellenar ( costoPorArticulo [], int );

void total ( costoPorArticulo [], int);

void despliegue ( costoPorArticulo [], int);

float fin (costoPorArticulo [], int);

int main (){
cout <<"TU SUPER AMIGO S.A DE C.V"<< endl;
cout << "Los mejores precios, todos los dias \n ";

int cant = 0;
cout <<" Ingrese la cantidad de articulos: ";
cin >> cant;

costoPorArticulo venta [cant];

rellenar ( venta,cant);

total (venta , cant);

despliegue (venta,cant);



cout<< "TOTAL DE LA COMPRA:                  $"<< fin(venta,cant )<<" dolares" <<endl<<endl  ;

cout << "Lo esperamos, vuelva pronto..."<< endl;

    return 0;
}

void rellenar ( costoPorArticulo ventas [], int cant ){


 for(int i=0; i< cant; i++){
		fflush(stdin);
		cout<< "Ingrese el nombre del producto: "<<endl;
		cin.getline(ventas[i].nombreArticul,longCad + 1,'\n');
		cout<<"Ingrese la cantidad que lleva del producto anterior:  ";
		cin>>ventas[i].cantidad;
		cout<<"Ingrese el precio de los productos: $";
		cin>>ventas[i].precio;
	}
 
}

void total ( costoPorArticulo ventas [], int cant){

for(int i=0; i< cant; i++){
		
		ventas[i]. costoPorArticulo =( ventas[i].cantidad * ventas[i].precio);

}
}


void despliegue ( costoPorArticulo ventas[], int cant) {

  cout << "Cantidad    Articulo            P. Unit              Total " <<endl;

for(int i=0; i< cant; i++){


    cout<<  ventas[i].cantidad <<"           "<< ventas[i].nombreArticul <<"                   $ "<< ventas[i].precio <<"                 $ " << ventas[i]. costoPorArticulo<< endl;


}

}

float fin (costoPorArticulo ventas [], int cant ){

	float sumatoria=0;

for(int i=0; i< cant; i++){
		
sumatoria  = sumatoria + ventas[i]. costoPorArticulo;

}
return sumatoria;

}