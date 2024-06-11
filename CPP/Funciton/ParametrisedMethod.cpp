#include<iostream>
using namespace std;

// default parameter will always start from the right side, we cann't give default parameter in between or in starting
// void add(int n=8,int b) // not possible
void add(int n,int b=9){
    cout<<n+b;
}
int main(){
    add(4);
}