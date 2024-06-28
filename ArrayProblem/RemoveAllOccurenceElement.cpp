#include<iostream>
using namespace std;

void RemoveOccurence(int arr[],int n,int key){
    int indx=-1;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            continue;
        }
        arr[++indx] = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            arr[i] = 0;
        }
    }
}

int main(){
    int arr[] = {3,2,2,3};
    int key=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    RemoveOccurence(arr,n,key);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}