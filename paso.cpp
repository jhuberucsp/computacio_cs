#include<iostream>
using namespace std;

void cambio(int &i,int &j){
    int temp=j;
    j=i;
    i=temp;}
int main(){
    int a,b;
    cout<<"ingrese valor de a :"<<endl;
    cin>>a;
    cout<<"ingrese valor de b :"<<endl;
    cin>>b;
    //cout<<a&<<endl;
    cambio(a,b);
    cout<<"el valor de a es: "<<a<<"  el valor de b es: "<<b<<endl;
}
