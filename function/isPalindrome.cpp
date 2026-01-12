#include<iostream>
using namespace std;
int isPalindrome(int num){
    int original=num;
    int reverse=0;
  while(num>0){
    int last_digit=num%10;
    reverse=reverse*10+last_digit;
    num/=10;
  }
  if(reverse==original){
    cout<<"It is palindrome";
  }
  else{
    cout<<"It is not a palindrome:";
  }
}
int main(){
int num;
cout<<"Enter your number: ";
cin>>num;
isPalindrome(num);


    return 0;
}