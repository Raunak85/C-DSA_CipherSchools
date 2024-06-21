#include<iostream>
using namespace std;

void RepeatElement(int arr[],int n){
    int temp[n] ={0};
    int countArr[n];
    for(int i=0;i<n;i++){
        int count=0;
        int element=arr[i];
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
            
                count++;
                temp[element]++;
            }
        }
        countArr[i] = count;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int arr[] ={1,2,2,3,6,2,7,3,8,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    RepeatElement(arr,n);
}