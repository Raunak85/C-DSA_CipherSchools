#include<iostream>
using namespace std;

void RemoveOccurence(int arr[],int n,int key){
    int indx=0;
    for(int i=0;i<n;i++){
       if(arr[i] != key){
        arr[indx++] = arr[i];
       }
    }
    while (indx<n)
    {
        arr[indx++] = 0;
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