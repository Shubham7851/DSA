#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int rev[n];
    for(int i=0; i<n; i++){
      rev[i]=arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        cout<<rev[i]<<" ";
    }
}
int main(){
int n;
cout<<"Enter your size of array: ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
 cin>>arr[i];
}
reverse(arr,n);

    return 0;
}