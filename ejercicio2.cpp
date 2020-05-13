#include <iostream>
#include <math.h>

using namespace std;

int main() {

cout<< "valor del radio: " ;

float num1;
cin>>num1;

cout<< num1<<endl;

cout<< "valor de pi: ";

const float num2 = 3.14159265359;

cout<<num2<< endl<<endl;

cout<< "AREA DE UN CIRCULO"<< endl;

cout << "A= PI*(R*R)" ;

float mult= num2 * pow(num1,2);

cout<<" Area= "<< mult<<" cm "<< endl<<endl;




cout<<"Perimetro de un circulo";

cout<< "P=2(pi)*R     "  ;

float mult2= (2* num2)*num1;

cout<<"Perimetro=  "<<mult2<<" cm "<< endl;

    return 0 ;

}