#include<iostream>
using namespace std;

void SpiralPrint(int arr[][5]){
    int leftCol = 0;
    int rightCol = 5-1;
    int TopRow = 0;
    int buttomRow=5-1;
    while(TopRow<=buttomRow && leftCol<=rightCol){

        for(int i=leftCol;i<=rightCol;i++){
            cout<<arr[TopRow][i]<<" ";
        }
        cout<<endl;
        TopRow++;

        for(int i=TopRow;i<=buttomRow;i++){
            cout<<arr[i][rightCol]<<" ";
        }
        cout<<endl;
        rightCol--;

        for(int i=rightCol;i>=leftCol;i--){
            cout<<arr[buttomRow][i]<<" ";
        }
        cout<<endl;
        buttomRow--;

        for(int i=buttomRow;i>=TopRow;i--){
            cout<<arr[i][leftCol]<<" ";
        }
        cout<<endl;
        leftCol++;
    }
}

int main(){
    int arr[5][5] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    SpiralPrint(arr);
}