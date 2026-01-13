#include<iostream>
using namespace std;
void change(int *a){
    *a=20;
    cout<<*a;
}
int main(){
    int a=10;
    change(&a);
    cout<<a;
    return 0;
}