#include<iostream>
using namespace std;
void noChangeX(int x){
    x=30;
    cout<<x<<endl;
}
int main(){
int x=10;
noChangeX(x);
cout<<x;
    return 0;
}