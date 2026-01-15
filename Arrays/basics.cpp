#include<iostream>
using namespace std;
void printarr(int n){
    int arr[n];
for(int i=0; i<=n; i++){
    cin>>arr[i];
}
for(int i=0; i<=n; i++){
    cout<<arr[i]<<" ";
}
}

int main(){
int array[]={12,34,56,78,87};
cout<<array[3]<<endl;
int *ptr=&array[2];
cout<<*ptr<<endl;
cout<<&array[2]<<endl;
for(int i=0; i<5; i++){
    cout<<array[i]<<" ";
}
int n;
cout<<"Enter the size of array:";
cin>>n;
printarr(n);


    return 0;
}