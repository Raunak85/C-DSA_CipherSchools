#include<iostream>
using namespace std;

class A{
    int a = 5;
    public:
    friend void increamentA(A);
};

void increamentA(A a1){
    cout<<a1.a;
}
int main(){
    A a;
    increamentA(a);
}