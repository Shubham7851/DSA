#include<iostream>
#include<climits>
using namespace std;
void sell(int arr[],int n){
    int maxprofit=0;
    int minprice=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<minprice){
        minprice=arr[i];
    }
    int solve=arr[i]-minprice;
    if(maxprofit<solve){
        maxprofit=solve;
    }
}
cout<<maxprofit;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sell(arr,n);
    return 0;
}