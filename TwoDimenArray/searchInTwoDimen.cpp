#include<iostream>
using namespace std;

bool isKeyPresent(int arr[][4],int r,int c,int key){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    if(isKeyPresent(arr,3,4,7)){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
}