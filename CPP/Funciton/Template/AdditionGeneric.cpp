#include<iostream>
using namespace std;

template <class T1>
class Add{
    T1 a,b;
    public:
    Add(T1 n,T1 n1){
        a = n;
        b = n1;
    }
    // T1 getA(){
    //     return a;
    // }
    // T1 getB(){
    //     return b;
    // }

    T1 display(){
        cout<< a+b;
    }
};

int main(){
    Add<int> a1(4,3);
    a1.display();
}