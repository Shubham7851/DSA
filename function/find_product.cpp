#include<iostream>
using namespace std;
int find_product(int a, int b){
    return a*b;
}
int main(){
int a;
cout<<"Write first number: ";
cin>>a;
int b;
cout<<"Write second number: ";
cin>>b;
int product=find_product(a,b);
cout<<product;

    return 0;
}