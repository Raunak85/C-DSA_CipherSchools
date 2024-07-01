#include<iostream>
using namespace std;

int SumOfArray(int arr[],int n){
    if(n == 0) return 0;
    if(n == 1) return arr[0];
    return arr[0] + SumOfArray(arr+1,n-1);
}

int main(){
    int arr[] = {};
    cout<<SumOfArray(arr,0);
}