#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,1,3,5,6,3,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int second=0,first=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
    }
    cout<<second;
}