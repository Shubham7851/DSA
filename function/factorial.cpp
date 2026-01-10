#include<iostream>
using namespace std;
void product(int n){
int ans=1;
for(int i=1; i<=n; i++){
    ans=ans*i;
}
cout<<ans;

}
int main(){
int n;
cout<<"Enter your numbe: ";
cin>>n;
product(n);


    return 0;
}