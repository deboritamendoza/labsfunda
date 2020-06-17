#include <iostream>

using namespace std;


int main (){

int year, year1, dia, dia1, mes, mes1;
           

           
           cout<<"Ingrese el valor de dia: ";
            cin >> dia;
           cout <<  "Ingrese el valor de mes: ";
           cin >> mes ;
         cout <<"Ingrese el valor de year: ";
            cin >> year;

cout << "La fecha ingresada es: "<< dia <<"/"<< mes <<"/"<< year <<endl;

            if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((year % 4 != 0) || (year % 100) == 0) && (year % 400) != 0) || dia == 31)
            {
                mes1 = mes + 1;
                dia1 = 1;
            }
            else
            {
                dia1 = dia + 1;
                mes1 = mes;
            }

            if (dia1 == 1 && mes1 == 13)
            {
                mes1 = 1;
                year1 = year + 1;
            }
            else
               year1 = year;
           
            cout << "El dia siguiente es: " << dia1 <<"/" << mes1 <<"/"<<year1<< endl;







    return 0;

}