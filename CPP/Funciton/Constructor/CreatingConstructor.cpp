#include<iostream>
using namespace std;

// Constructor is special function of c++, which is automatically call when instance of the class is created
// which is used to initialize the data memebr of class 
// their will be no return type of constructor


class Employee{
    public:
    int EmpId;
    string name;
    
    // Employee(){
    //     EmpId = 101;
    //     name = "Raunak";
    // }

    Employee(int e,string n){
        EmpId = e;
        name = n;
    }

    void show(){
        cout<<"Employee id = "<<EmpId<<endl;
        cout<<"Employee name = "<<name;
    }
};
int main(){
    int id=101;
    string name = "suraj";
    Employee e1(id,name);

}