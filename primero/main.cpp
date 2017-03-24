#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //!!!!!!!!!!!!recordar que los valores se repiten y nose podra ejecutar todo al mismo tiempo　　　　
//LAS AREAS
  /*  cout<<"Area del circulo"<< endl;
    float a,r;
    const float P=3.1416;
    cout << "Ingrese el radio" << endl;
    cin>>r;
    a=P*(pow(r,2));
    cout<<"El area del circulo es: "<<a<<endl;

    cout<<"Area del cuadrado"<<endl;
    float l,a1;
    cout<<"Ingrese la medida de uno de sus lados"<<endl;
    cin>>l;
    a1=pow(l,2);
    cout<<"El area del cuadrado es de: "<<a1<<endl;

    cout<<"Area del rectangulo"<<endl;
    float a2,b,h;
    cout<<"ingrese medida de la base"<<endl;
    cin>>b;
    cout<<"Ingrese medida de la altura"<<endl;
    cin>>h;
    a2=b*h;
    cout<<"Area del rectangulo es de:"<<a2<<endl;*/

    //INTERCAMBIO DE VALORES CON 3 TERMINOS
    /*int x,y,r;
    cout<<"ingrese el valor de x"<<endl;
    cin>>x;
    cout<<"ingrese el valor de Y"<<endl;
    cin>>y;
    r=x;
    x=y;
    y=r;
    cout<<"x es: "<<x<<endl;
    cout<<"y es: "<<y<<endl;*/

    //INTERCAMBIO DE VALORES CON 2 TERMINOS
    /*int X,Y;
    cout<<"ingrese el valor de x"<<endl;
    cin>>X;
    cout<<"ingrese el valor de Y"<<endl;
    cin>>Y;
    X=X+Y;
    Y=X-Y;
    X=X-Y;
    cout<<"x es: "<<X<<endl;
    cout<<"y es: "<<Y<<endl;*/
    /*
    int X,Y;
    cout<<"ingrese el valor de x"<<endl;
    cin>>X;
    cout<<"ingrese el valor de Y"<<endl;
    cin>>Y;
    if(X<Y){
        cout<<"Y es mayor que X"<<endl;
    }
    else if(X==Y){
        cout<<"X es igual a Y";
    }
    else{
        cout<<"X es mayor que Y";
    }*/

    int a,b,c;
    cout<<"ingrese el valor de a"<<endl;
    cin>>a;
    cout<<"ingrese el valor de b"<<endl;
    cin>>b;
    cout<<"ingrese el valor de c"<<endl;
    cin>>c;
    if(a>b){
        if (b>c){
            cout<<" a>b>c";
        }
        else{"a>c>b";}
    }
    if (c>b){
        if (b>a){
            cout<<"c>b>a";

        }
        else{cout<<"c>a>b";}

    }
    else{
        if (a>c){
            cout<<"b>a>c";

        }
        else{
            cout<<"b>c>a";
        }

    }
    return 0;
}
