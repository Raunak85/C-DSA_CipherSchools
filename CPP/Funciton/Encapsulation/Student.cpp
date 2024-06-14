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
    Student s[3];
    string name;
    int rollno,age;
    char grade;
    for (int i = 0; i < 3; i++)
    {
        cout<<"--------Enter student Details "<<i<<"--------"<<endl;
        cout<<"Enter Your Name"<<endl;
        cin>>name;
        s[i].setName(name);
        cout<<"Enter Your Roll number"<<endl;
        cin>>rollno;
        s[i].setRollNo(rollno);
        cout<<"Enter Your Age"<<endl;
        cin>>age;
        s[i].setAge(age);
        cout<<"Enter Your Grade"<<endl;
        cin>>grade;
        s[i].setGrade(grade);
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<"----------------------------"<<endl;
        cout<<"Name of student = "<<s[i].getName()<<endl;
        cout<<"Roll no of student = "<<s[i].getRollNo()<<endl;
        cout<<"Age of student = "<<s[i].getAge()<<endl;
        cout<<"Grade of student = "<<s[i].getGrade()<<endl;
    }
    
   
    
}