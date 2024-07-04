#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size = 10;
    int top;

    Stack(){
        
        arr = new int(size);
        top = -1;
    }
    void push(int val){
        if(top == size-1){
            cout<<"Stack is overflow";
        }else{
            arr[++top] = val;
        }

    }
    void peek(){
        if(top == -1){
            cout<<"Stack underFlow"<<endl;
        }
        else{
            cout<<"peek element of stack is : "<<endl;
            cout<<arr[top]<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Delete element of stack is :"<<endl;
            cout<<arr[top--]<<endl;
        }
    }
};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.peek();
    s1.pop();
    s1.peek();
}