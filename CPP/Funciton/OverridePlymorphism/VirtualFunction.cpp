#include<iostream>
using namespace std;

class VirtualFunction{
    public:
    virtual void print(){
        cout<<"Base Class"<<endl;
    }
};
class Child:public VirtualFunction{
    public:
    void print(){
        cout<<"Child class"<<endl;
    }
};


int main(){
    Child c;
    VirtualFunction* v = &c ;
    v->print();
}