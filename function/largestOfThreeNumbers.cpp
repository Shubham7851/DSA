#include<iostream>
using namespace std;
void largest(int a, int b, int c){
    if(a>b && a>c){
        cout<<a<<" is greater";
    }
    else if(c>b){
        cout<<c<<" is grater";
    }
    else{
        cout<<b<<" is greater";
    }
}
int main(){
int a,b,c;
cout<<"Enter your number: ";
cin>>a;
cout<<"Enter your number: ";
cin>>b;
cout<<"Enter your number: ";
cin>>c;
largest(a,b,c);
}