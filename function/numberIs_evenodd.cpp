#include<iostream>
using namespace std;
void checkNum(int num){
if(num%2==0){
    cout<<"Number is even";
}
else{
    cout<<"Number is odd";
}
}
int main(){
int num;
cout<<"Enter your number: ";
cin>>num;
checkNum(num);

    return 0;
}