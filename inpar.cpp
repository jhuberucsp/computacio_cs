#include<iostream>
using namespace std;
/*El usuario ingresa numeros para identificar si es par o impar deteniendoce cuando ingrese  -1*/
int main(){
    int i;
    /*do{
        cout<<"ingrese numero"<<endl;
        cin>>i;
        if(i%2==0){cout<<i<<" Es Par"<<endl;}
        else{cout<<i<<" Es Impar"<<endl;}
    }
    while(i!=-1);*/
    cout<<"ingrese numero"<<endl;
    cin>>i;
    while(i!=-1){
        if(i%2==0){cout<<i<<" Es Par"<<endl;}
        else{cout<<i<<" Es Impar"<<endl;}
        cout<<"ingrese numero"<<endl;
        cin>>i;

    }
return 0;}
