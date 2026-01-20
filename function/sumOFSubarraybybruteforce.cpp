#include<iostream>
#include<climits>
using namespace std;
void sum(int arr[],int n){
    int max=INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
           sum+=arr[end];
           if(sum>max){
            max=sum;
        }
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

}