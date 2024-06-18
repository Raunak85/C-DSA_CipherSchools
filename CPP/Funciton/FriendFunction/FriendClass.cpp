#include<iostream>
using namespace std;
class A{
    int a = 9;
    public:
    friend class B;
};
class B: public A{
    public:
    void display(){
        cout<<a;
    }
};

int main(){
    B b;
    b.display();
    
}