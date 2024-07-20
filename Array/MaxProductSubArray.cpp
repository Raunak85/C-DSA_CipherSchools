#include<iostream>
using namespace std;

int maxProductSubArray(int arr[],int n){
    int max = arr[0];
    int sum = 1;
    for(int i=0;i<n;i++){
        sum *=arr[i];
        if(sum > max){
            max = sum;
        }
        if (sum < 0){
            sum =1;
        }
    }
    return max;
}
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxProductSubArray(arr,n);
}