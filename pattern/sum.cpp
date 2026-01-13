#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<"Sum of "<<a<<" and "<<b<<" is:"<<a+b;
}
void sum(int a, int b, int c){
    cout<<a+b+c;
}
// void sum(double a, double b, double c){
//     cout<<a+b+c;
// }
int main(){
double a,b,c;
cout<<"Write a number:";
cin>>a;
cout<<"Write a number: ";
cin>>b;
cout<<"Write a number: ";
cin>>c;
sum(a,b,c);

    return 0;
}

