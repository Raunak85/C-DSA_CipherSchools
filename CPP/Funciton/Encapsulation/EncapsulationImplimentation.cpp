#include<iostream>
using namespace std;

class Employee{
    int empId;
    double salary;
    public:
    void setSalary(int id,double sal){
        empId = id;
        salary = sal;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Employee e1;
    e1.setSalary(101,300000);
    cout<<"Salary of employee is = "<<e1.getSalary();
}