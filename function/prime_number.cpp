#include<iostream>
using namespace std;
bool prime(int num){
    if(num==1){
       return false;
    }
    for(int i=2; i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
 int num;
 cout<<"Write a number: ";
 cin>>num;
 prime(num);
 if(prime){
    cout<<"It is a prime number";
 }
 else{
    cout<<"It is not a prime number";
 }
    return 0;
}