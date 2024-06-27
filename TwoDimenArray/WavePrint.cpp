#include<iostream>
using namespace std;

void WavePrint(int arr[][3]){
    for(int j=0;j<3;j++){
        if(j%2 == 0){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=3-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9};
    WavePrint(arr);
}