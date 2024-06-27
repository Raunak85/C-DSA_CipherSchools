#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"Enter Element of 3 X 3 matrix"<<endl;
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Element of two dimentional array : "<<endl;
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}