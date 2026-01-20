#include<iostream>
#include<climits>
using namespace std;
void sum(int arr[],int n){
  int currsum=0;
  int max=INT_MIN;
  for(int start=0;start<n;start++){
      currsum+=arr[start];
      if(currsum>max){
        max=currsum;
      }
      if(currsum<0){
        currsum=0;
      }
  }
  cout<<max;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
sum(arr,n);



  return 0;
}