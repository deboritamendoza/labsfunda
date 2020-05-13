#include <iostream>

using namespace std;

int main(){
    string p;
    int c;
    float $;
    float reci;


cout<<"Ingrese el nombre del producto:";
 getline(cin,p);


cout<< "cantidad: ";
 cin>> c;


cout<<"precio:";
 cin>>$;

float mult=(c*$);


cout<< "TOTAL A PAGAR: $" <<mult<<endl;


 cout<<"recibe: $";
 cin>> reci;

 float rest=(reci-mult);

 cout<<"Cambio: $"<<rest<<endl;


 return 0;

}