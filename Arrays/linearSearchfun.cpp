#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}
int main(){
int n;
cout<<"Enter size of array:";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
   cin>>arr[i];
}
int key;
cout<<"Enter your number to search";
cin>>key;
int found=linearsearch(arr, n, key);
if(found!=-1){
    cout<<"Number is found at:"<<found;
}
else{
    cout<<"Number is not found";
}
    return 0;
}
