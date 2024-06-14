#include<iostream>
using namespace std;

class Animal{
    public:
    int ear=2;
    int nose=1;
    int eye = 2;
    void eat(){
        cout<<"-----Eating---------"<<endl;
    }

};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"------barking------"<<endl;
    }
};

int main(){
    Dog a;
    a.eat();
    a.speak();
}