#include<iostream>
using namespace std;

/*Este programa combertira de Millas a Kilometros    formula a usar ;  #####    """ Kilometros = Milla/0.62137  """""    ####*/
int main(){
    float millas,kilometro;
    cout<<"Hola hoy le ayudares a convertir de millas a kilometros"<<endl;
    cout<<"Ingrse cuantas millas "<<endl;
    cin>>millas;
    kilometro=(millas/0.62137);
    cout<<"\n"<<endl;
    cout<<millas<<" Millas"<<" Son: "<<kilometro<<" Kilometros"<<endl;
    return 0;
    }
