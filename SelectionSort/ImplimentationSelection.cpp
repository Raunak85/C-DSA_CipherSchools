#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    int min,IndxJ;
    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min = j;
            }
        }
        swap(i,min);
    }
}

int main(){
    int arr[] = {2,4,1,5,7,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}