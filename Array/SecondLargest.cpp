#include<iostream>
using namespace std;
int main(){
    int min =  INT8_MIN;
    int arr[] = {1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int secondMax=min,max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
       if(arr[i] >secondMax && arr[i] != max){
            secondMax = arr[i];
        }
    }
    if(max == secondMax){
        cout<<"all element are same in array";
        return 0;
    }
    cout<<secondMax;
}