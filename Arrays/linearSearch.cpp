#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
cin>>arr[i];
}
int key;
cout<<"Enter your number want to search in array: ";
cin>>key;
for(int i=0; i<n; i++){
    if(arr[i]==key){
        cout<<"your number is present at:"<<i;
    }
}
cout<<"not found";
    return 0;
}