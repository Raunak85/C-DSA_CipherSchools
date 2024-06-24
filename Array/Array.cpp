#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
        if(count == 0){
            arr[index++] = arr[i]; 
        }
    }
    n = index;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}