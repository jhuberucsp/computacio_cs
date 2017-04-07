#include <iostream>

using namespace std;
int sum(const int array[],const int length){
    int sum=0;
    for(int i=0;i<length;sum+=array[i++]);
    return sum;
    }

float averange(const int arr[],const int length){
    return (float)sum(arr,length)/length;
}

int invert( int ar[],const int length){
    int temp=length;
    for(int i=0;i<length/2;i++){
        int c=0;
        temp=temp-1;
        //for(int j=length;j>i;j--){
        c=ar[i];
        ar[i]=ar[temp];
        ar[temp]=c;
    }

    for(int j=0;j<length;j++){
        cout<<ar[j];
    }

}

int orden(int a[],const int length){
   /* int x=0;
    int b,d;
    while(a[b]>a[d]&&x<length){
        int temp=0;*/
    int temp=0;
    for (int i=0;i<length;i++){
        for(int j=1;j<length-1;j++){
            if (a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }



        }
    }
    for(int x=0;x<length;x++){
        cout<<a[x];
    }

    }

int main(){

    int n;
    cout<<"ingrese tamaño";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    //cout<<"sum:"<<sum(array,n)<<endl;
    //cout<<"prom es:"<<averange(array,n)<<endl;
    //cout<<invert(array,n)<<"iverti"<<endl;
    cout<<orden(array,n)<<endl;

    }

