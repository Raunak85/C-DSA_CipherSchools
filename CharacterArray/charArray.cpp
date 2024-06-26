#include<iostream>
using namespace std;

int main(){
    int n=10;
    char arr[n];
    cout<<"enter your name"<<endl;
    cin.getline(arr,100);
    // cin>>arr;
    int count=0;
    // cout<<arr;
    // char* c=arr;

    // while (*(c) != '\0')
    // {
    //     count++;
    //     c++;
    // }
    int i=0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }
    
    cout<<count;
}