#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
}

int main(){
    int arr[] = {3,5,6,7,8};
    int n = sizeof(arr)/sizeof(0);
    if(isSorted(arr,n)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array not sorted"<<endl;
    }
}