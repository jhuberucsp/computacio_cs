#include<iostream>
using namespace std;
int main(){
    int numero;
    do{
        cout<<"ingrese Numero"<<endl;
        cin>>numero;

        if (numero<10&&numero>-1){
            switch(numero){
                case 0:
                    cout<<"CERO"<<endl;
                    break;
                case 1:
                    cout<<"UNO"<<endl;
                    break;
                case 2:
                    cout<<"DOS"<<endl;
                    break;
                case 3:
                    cout<<"TRES"<<endl;
                    break;
                case 4:
                    cout<<"CUATRO"<<endl;
                    break;
                case 5:{
                    cout<<"CINDO"<<endl;
                    break;}
                case 6:{
                    cout<<"SEIS"<<endl;
                    break;}
                case 7:{
                    cout<<"SIETE"<<endl;
                    break;}
                case 8:{
                    cout<<"OCHO"<<endl;
                    break;}
                case 9:{
                    cout<<"NUEVE"<<endl;
                    break;}
                }
        }
        else{cout<<"numero no permitido ";}
        }while(numero!=-1);
        return 0;}
