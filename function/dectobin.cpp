#include<iostream>
using namespace std;
int dectobin(int num){
int binary=0;
int remainder;
while(num>0){
    if(remainder==1){
        return;
    }
    else{
     remainder=num%10;
    binary=remainder;
    num/=10;
    }
}
cout<<binary;

}
int main(){
int num;
cout<<"Enter your decimal number: ";
cin>>num;
dectobin(num);

    return 0;
}