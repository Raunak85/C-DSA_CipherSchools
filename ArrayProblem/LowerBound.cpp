#include<iostream>
using namespace std;

int LowerBound(int arr[],int n,int x){
    int mid,start=0,end=n-1;
    int indx = n;
    while (start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid] > x){
            indx = mid;
            end = mid-1;
            
        }
        else {
            start = mid+1;
        }
    }
    return indx;
    
}


int main(){
    int arr[] = {2,3,5,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=9;
    int lowerBound = LowerBound(arr,n,x);
    cout<<lowerBound;
}