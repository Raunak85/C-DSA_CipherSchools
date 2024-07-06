// remove all occurence which given by the key value from the main method like input 2332 , key = 3 then output = 2 2 0 0
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