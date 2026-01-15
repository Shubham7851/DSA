#include<iostream>
using namespace std;
int main(){
int arr[]={5,4,3,9,2};
int max=5;
for(int i=1; i<5; i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"Largest number is:"<<max;



    return 0;
}