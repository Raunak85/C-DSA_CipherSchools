#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        bool flag = true;
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
                cout<<j;
            }
        }
        if(flag){
            break;
        }
    }
    cout<<endl;
    
}

int main(){
    int arr[] = {4,3,2,7,5,9,8};
    // int arr[] = {1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}