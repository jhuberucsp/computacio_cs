#include<iostream>
using namespace std;
int a[]={0,1,2,3};
int t=3;
int sum(int arr[],int tama){
    int c=0;
    if(tama==0){
        return arr[0];
    }
    else {
        c=arr[tama]+sum(arr,tama-1);
    }return c;};
int main(){
    int a[]={1,2,3,0};
    int t=3;
        cout<<sum(a,t);}
