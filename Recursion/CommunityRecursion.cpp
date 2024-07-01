#include<iostream>
using namespace std;
int StairWay(int n){
   
    if(n < 2 ){
        
        return 1;
    }
    return StairWay(n-1) + StairWay(n-2);
}
int main(){
    int n=4;
    cout<<StairWay(n);
}