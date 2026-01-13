#include<iostream>
using namespace std;
void changeA(int &x){
    x=30;
    cout<<x<<endl;  
    
}
int main(){
int x=10;
changeA(x);
cout<<x;

    return 0;
}