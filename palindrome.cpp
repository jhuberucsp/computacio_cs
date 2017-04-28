#include<iostream>
using namespace std;
int tamano(char pal[]){
    int c=0;
    while(pal[c]!='\n'){cout<<pal[c];c=c+1;}
    return c;}

bool palindrome(char palbra[],int tama){
    for(int i=0;i<tama/2;i++){
            tama=tama-1;
            if (palbra[i]!=palbra[tama]){

                return false;
            }
    return true;

    }}
int main(){
    char array[]="reconocer";
    cout<<array[0];
    cout<<array[8];
    //cout<<"ingrese palabra"<<endl;
    //cin>>array;
    int longitu=9;//tamano(array);
    cout<<palindrome(array,longitu);}

