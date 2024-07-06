// find distinct value from the array and assign that value to Array 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j= i+1;

    while(j<size){
        if(arr[i] != arr[j]){
            arr[++i] = arr[j];
        }
        j++;
    }
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
}