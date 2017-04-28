#include<iostream>
using namespace std;
int potencia(int base,int expo){
    int p=base;
    if(expo==0){
        return 1;
    }
    else if(expo==1){
        return base;
    }
    else{
        for(int i=1;i<expo;i++){
            p=p*base;
        }
    return p;}
}
int main(){
    int b,e;
    cout<<"ingrese base"<<endl;
    cin>>b;
    cout<<"ingrse exponete"<<endl;
    cin>>e;
    cout<<potencia(b,e);
}
