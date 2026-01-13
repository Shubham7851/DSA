#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Write number to find factorial: ";
cin>>n;
int fact=1;
for(int i=n; i>0; i--){
    fact*=i;
}
cout<<"Factorial of "<<n<<"is "<<fact;


    return 0;
}