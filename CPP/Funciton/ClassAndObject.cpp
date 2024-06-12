#include<iostream>
using namespace std;
class A{
    public:
    int a,b=4;
    A(int a){

        this->a = a;
    }
    void show(){
        cout<<a+b;
        cout<<a-b;
    }
};
int main(){
    A  a(4);
    a.show();
}