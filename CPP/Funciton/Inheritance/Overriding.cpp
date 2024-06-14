#include<iostream>
using namespace std;
class Base {
    public:
    virtual void print(){
        cout<<"Base";
    }
};

class Child : public Base {
    public:
    void print(){
        cout<<"Child";
    }
};

int main(){

    // Child c;
    // c.print(); -- Child
    // Base b;
    // b.print() --- Base;
    // Child c;
    // c.Base::print(); -- Base;
    Child c;
    Base* ptr=&c;

    ptr->print();

}