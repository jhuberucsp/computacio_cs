#include<iostream>
using namespace std;
 /*En este pro grama se convertira de Grados Fahrenheid  a Celcius usaremos la formula ##### """"""C=(F-32)*5/9""""""   ########*/
int main(){
    float C;
    cout<<"Este programa lo ayudara proporcionandole una tabla con los grados fahrenheit a celcius"<<endl;
    for(float i=0;i<301;i=i+20){
            C =(i-32)*5/9;
            cout<<i<<" F"<<"<==>"<<C<<" C"<<endl;

    }

return 0;}
