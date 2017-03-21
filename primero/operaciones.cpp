#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;
    cout<<"Sumar"<<endl;
    cout<<"ingres valor de x:  ";
    cin>>x;
    cout<<"ingrese valor de y:  ";
    cin>>y;
    cout<<endl;
    int a=x+y;
    cout <<"la suma de "<<x<<"+"<<y<<" es: "<<a<<endl;
    cout<<"Resta"<<endl;
    cout<<"ingres valor de x:  ";
    cin>>x;
    cout<<"ingrese valor de y:  ";
    cin>>y;
    cout<<endl;
    int b=x-y;
    cout<<"la resta de "<<x<<"-"<<y <<" es: "<<b<<endl;
    cout<<"multipicar"<<endl;
    cout<<"ingres valor de x:  ";
    cin>>x;
    cout<<"ingrese valor de y:  ";
    cin>>y;
    cout<<endl;
    int c=x*y;
    cout<<"la multiplicacion de "<<x<<"*"<<y<<" es: "<<c<<endl;
    cout<<"Dividir"<<endl;
    cout<<"ingres valor de x:  ";
    cin>>x;
    cout<<"ingrese valor de y:  ";
    cin>>y;
    cout<<endl;
    float d=x/y;
    cout<<"la divicion de "<<x<<"/"<<y<<" es: "<<x/y << endl;
    return 0;
}
