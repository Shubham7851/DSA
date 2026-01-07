#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter your number: \n";
cin>>num;
bool isPrime=true;
for(int i=2; i<num; i++){
    if(num%i==0){
        break;
    }
    else{
        isPrime=false;
    }
}
if(isPrime){
    cout<<"composite";
}
else{
    cout<<"prime number";
}
    return 0;
}