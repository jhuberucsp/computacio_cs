#include<iostream>
using namespace std;
/*int opera(char operador,bool a,bool b){

    switch(operador)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        if (b==0){
            cout<<"No existe"<<endl;
        }
        else{
            cout<<a/b;
        }
        break;
    default:
        cout<<"horror";
        break;
        }
    }
int main(){
    char a;
    int b,c;
    cout<<"ingrese operador"<<endl;
    cin>>a;
    cout<<"ingrse valor 1"<<endl;
    cin>>b;
    cout<<"ingrese valor 2"<<endl;
    cin>>c;
    return opera(a,b,c);}
*/
int main(){
    char opera[]="+50 3.6";
    for(int i=0;opera[i]!='\n';i++){


    }
    switch(opera[0])
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        if (b==0){
            cout<<"No existe"<<endl;
        }
        else{
            cout<<a/b;
        }
        break;
    default:
        cout<<"horror";
        break;
        }
    }}
