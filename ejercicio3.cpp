#include <iostream>
#include <math.h>

using namespace std;

int main(){

cout<<"formula cuadratica" <<endl<< endl ;
 
 float x1 , x2 ;
 int a, b, c;

cout<<"Digite el valor de a:  ";
cin>> a ;

cout<<"Digite el valor de b:  ";
cin>> b;

cout<<"Digite el valor de c:  " ;
 cin>> c; 

 x1= (-b +(sqrt((pow(b,2))-4*a*c)))/2*a;

 x2= (-b -(sqrt((pow(b,2))-4*a*c)))/2*a;

 cout<<"x1= "<< x1<<endl;
 cout<<"x2= "<< x2<<endl;
 
    return 0;
}