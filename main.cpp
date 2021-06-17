#include <iostream>
using namespace std;
//Se ingresa la edad de un estudiante. si la edad es de 5 a 10 años, se hace
//un recargo del 1% al costo de la matricula. Si la edad es supeior a los 10 años
//y menor o igual que 15 años, el recargo sera del 2%. Si la edad es mayor que
//15 y menor o igual que 20, el recargo es del 4%. Si la edad es superior
// a 20 años, el recargo es del 4%. Si la edad es superior
//a 20 años,el recargo es del 6%.
int main() {
    int edad;
    double recargo =0, costomatricula=0;
    cout<<"\n Ingresa la edad: ";
    cin>>edad;
    cout<<"\n Ingresa el costo de la matricula: ";
    cin>>costomatricula;
    if(edad<5)
        recargo=0;
    else if(edad>=5 && edad<=10)
        recargo=0.01;
    else if(edad<=15) // (edad>10 && edad<=15)
        recargo=0.02;
    else if(edad<=20)
        recargo=0.04;
    else
        recargo=0.06;
    double rec = costomatricula * recargo;
    double valorpagar= costomatricula + rec;
    cout<<"\n tu edad es de "<<edad<<" años, tu recargo es "<<rec;
    cout<<"\n Debes pagar en total "<<valorpagar;
    return 0;
}
