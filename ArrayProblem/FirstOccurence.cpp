#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    int mid,occurence=-1;
    while(start<end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            occurence = mid;
            end = mid-1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
    }
    if(occurence == -1){
        return -1;
    }
    return occurence;
}

int LastOccurence(int arr[],int n,int key){
    int start=0,end=n-1;
    int mid,occurence=-1;
    while (start<end)
    {
        mid = (start+end)/2;
        if(arr[mid] == key){
            occurence = mid;
           start = mid + 1;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
    }
    
     return occurence;
}

int main(){
    int arr[] = {2,3,3,3,3,3,3,3,4};
    int count;
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int Firstoccurence = FirstOccurence(arr,n,key);
    int Lastoccurence = LastOccurence(arr,n,key);

    cout<<Firstoccurence<<" ";
    cout<<Lastoccurence<<endl;

    if(Firstoccurence == -1 && Lastoccurence == -1){
        cout<<"Element NOt found";
    }
    else{
        count = (Lastoccurence-Firstoccurence)+1;
        cout<<count;
    }
}