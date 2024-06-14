#include<iostream>
using namespace std;

class Student{
    string name;
    int rollNo;
    int age;
    char grade;
    public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setRollNo(int id){
        rollNo = id;
    }

    int getRollNo(){
        return rollNo;
    }

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
        
    }

    void setGrade(char g){
        grade = g;
    }

    char getGrade(){
        return grade;
    }


};

int main(){
    Student s;
    s.setName("Raunak");
    s.setRollNo(34);
    s.setAge(23);
    s.setGrade('A');
    cout<<"Name of student = "<<s.getName()<<endl;
    cout<<"Roll no of student = "<<s.getRollNo()<<endl;
    cout<<"Age of student = "<<s.getAge()<<endl;
    cout<<"Grade of student = "<<s.getGrade()<<endl;
}