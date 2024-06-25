#include<iostream>
using namespace std;

int MaxSubArraySum(int arr[],int n){
    int max=INT16_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
        if(sum>max){
            max = sum;
        }
        if(sum<0){
            sum =0;
        }
    }
    return max;
}

int main(){
    int arr[] ={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max = MaxSubArraySum(arr,n);
    cout<<max;
    
}