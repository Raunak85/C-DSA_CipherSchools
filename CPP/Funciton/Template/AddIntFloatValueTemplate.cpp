#include<iostream>
using namespace std;

template <class T1,class T2>

class Add{
    T1 A;
    T2 B;
    public:
    Add(T1 n,T2 n1){
        A = n;
        B = n1;
    }
    void display(){
        cout<<A+B;
    }
};

int main(){
    Add<int,float> a1(3,3.5);
    a1.display();

}