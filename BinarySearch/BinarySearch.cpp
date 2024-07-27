// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {2,1,4,5,7,6};
//     int key = 6;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     int start = 0,end=n-1;
//     int mid = (start+end)/2;
//     bool flag = true;
//     if(arr[mid] == key){
//         cout<<"key is present"<<endl;
//         flag = false;
//         return 0;
//     }
//     else if(arr[start] == key){
//         cout<<"key is present"<<endl;
//         flag = false;
//         return 0;
//     }
//     else if(arr[end] == key){
//         cout<<"key is present"<<endl;
//         flag = false;
//         return 0;
//     }

//     while(start<=end){
//         if(key < arr[mid]){
//             end = mid;
//         }
//         else
//         {
//             start = mid;
//         }
//         mid = (start+end)/2;
//         if(arr[mid] == key){
//             cout<<"key is present"<<endl;
//             flag = false;
//             return 0;
//         }
//         start++;
//         end--;
//     }
//     if(flag == true){
//         cout<<"Not present";
//     }
//  }


#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            return true;
        }
        if(arr[mid] < key){
            start = mid;
        }else{
            end = mid;
        }
        start++;
        end--;
    }
    return false;

}

int main(){
    int arr[] = {3,5,2,6,1,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    if(BinarySearch(arr,n,4)){
        cout<<"Present";
    }else{
        cout<<"Not present";
    }
}