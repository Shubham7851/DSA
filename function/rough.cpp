#include<iostream>
using namespace std;
void print(char c){
    if(c=='z'){
        cout<<'a';
    }
    else{
   cout<<c+1;
    }
    
}
int main(){
 char c;
 cout<<"Enter your alphabet: ";
 cin>>c;
 print(c);

    return 0;
}