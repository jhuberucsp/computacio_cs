#include <iostream>
using namespace std;
int main(){
    int v,c;
    cout<<"ingrese hasta que numero evaluar"<<endl;
    cin>>v;
    for(int i=2;i<=v;i++){
        c=true;
        for(int j=1;j<(v);j++){
            if(i%j==0){
                c=false;

            }
        }
        if (c==true){
            cout<<i<<endl;

            }

    }
return 0;
}
