#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,5,10,1,2,7};
    int target=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    int flag =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i] + arr[j];
            if(sum == target){
                flag++;
                cout<<"Yes! sum pair exists";
                break;;
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag == 0){
         cout<<"No! sum pair not exists";
    }
}