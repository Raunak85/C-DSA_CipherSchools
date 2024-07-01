#include<iostream>
using namespace std;

bool isSortedArray(int arr[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSortedArray(arr+1,size-1);
}

int main(){
    int arr[] = {1,2,3,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(isSortedArray(arr,n)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}