#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Write a number: ";
cin>>n;
int num=n;
int sum=0;
while(n>0){
    int last_digit=n%10;
    sum=last_digit;
    n/=10;
}
if(sum==num){
    cout<<"It is armstrong";
}
else{
    cout<<"It is not...";
}
    return 0;
}