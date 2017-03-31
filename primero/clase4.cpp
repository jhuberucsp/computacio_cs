
#include <iostream>

using namespace std;

int main()
{
//introducir valores
 /*int score[4];
 int tempo;
 cout<<"ingresevalores"<<endl;
 cout<<"primer valor"<<endl;
 cin>>score[0];
 cout<<"segundo valor"<<endl;
 cin>>score[1];
 cout<<"tercer valor"<<endl;
 cin>>score[2];
 cout<<"cuarto valor"<<endl;
 cin>>score[3];
 tempo=score[0];
 score[0]=score[3];
 score[3]=tempo;
 tempo=score[1];
 score[1=score[2];
 score[2]=tempo;*/
 int c;
 cout<<"ingrese el tamano de lista";
 cin>>c;
 int l[c];
 for(int i=0;i<c;i++){
    cout<<"ingrese valor"<<endl;
    cin>>l[i];

 }
 int temp;
 for(int i=0;i<(c/2);i++){
        temp=l[i];
        l[i]=l[c-1-i];
        l[c-1-i]=temp;
 }



 for(int x=0;x<c;x++){
    cout<<endl;
    cout<<l[x]<<endl;
}
 int suma=0;
 for(int j=0;j<c;j++){
    suma=suma+l[j];

}
cout<<endl;
cout<<suma<<endl;



return 0;
}
