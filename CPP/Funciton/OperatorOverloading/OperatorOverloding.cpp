#include<iostream>
using namespace std;
class OperatorOverlaoding{
    int value;
    public:
    OperatorOverlaoding(){
        value =4;

    }

    void operator++(){  
        value+=10;
    }

    void display(){
        cout<<"value of variable "<<value<<endl;
    }
};

int main(){
    OperatorOverlaoding o1;
    o1.display();
    ++o1;
    o1.display();
}