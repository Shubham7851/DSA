#include<iostream>
using namespace std;
void sum(int num){
    int original=num;
    int ans=0;
    while(num>0){
        int last_digit=num%10;
        ans+=last_digit;
        num/=10;
    }
    cout<<ans;
}
int main(){
 int num;
 cout<<"Write a number: ";
 cin>>num;
sum(num);


    return 0;
}