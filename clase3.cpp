#include <iostream>

using namespace std;

int main()

{  /* int c=5;
    int x=c++;

    cout << x << endl;
    cout << c << endl;


###################################################

  int c=5;
    int x=++c;

    cout << x << endl;
    cout << c << endl;
    return 0;
###################################################*/
   /* int a,b,c,d;
    a=2;
    a+=3;
    b=7;
    b-=2;
    c=2;
    c*=4;
    d=8;
    d/=2;
    cout<<a<<b<<c<<d<<endl;
    return 0;
######################################################*/
/*int a,b,z;
cout<<"ingrese a"<<endl;
cin>>a;
cout<<"ungrese b"<<endl;
cin>>b;
if (a>b){
    z=a;

}
else{z=b;}
cout<<z<<endl;
return 0;*/
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//int a,b,z;cout<<"ingrese a"<<endl;cin>>a;cout<<"ungrese b"<<endl;cin>>b; z=(a>b)?a:b;cout<<z;
int score[4];
int c=4;
score[0] =c++;
score[1] =c++;
score[2] =c++;
score[3] =c++;
c=4;
cout<<score[c--]<<endl;
cout<<score[c--]<<endl;
cout<<score[c--]<<endl;
cout<<score[c--]<<endl;
}
