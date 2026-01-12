#include<iostream>
using  namespace std;
void binTodec(int num){
    int decimal=0;
int pow=1;
while(num>0){
int last_digit=num%10;
decimal=decimal+last_digit*pow;
pow*=2;
num/=10;
}
cout<<decimal;
}
int main(){
int num;
cout<<"Enter your binary number: ";
cin>>num;
binTodec(num);




    return 0;
}
