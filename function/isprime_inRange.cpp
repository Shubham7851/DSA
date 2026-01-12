#include<iostream>
using namespace std;
bool isPrime(int range){
    if(range==1){
        return false;
    }
    for(int i=2; i*i<=range; i++){
        if(range%i==0){
            return false;
        }
    }
    return true;
}
void result(int range){
    for(int i=2; i<=range; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
int range;
cout<<"Write your range: ";
cin>>range;
result(range);


    return 0;
}