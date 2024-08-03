#include<iostream>
#include<stack>
using namespace std;

class Stack{
    int* arr;
    int size;
    int top;
    int count =0;
    public:
    Stack(int size){
        this->size = size;
        arr=new int[size];
        top = -1;
    }

    void push(int val){
        if(top < size){
            arr[++top] = val;
        }else{
            cout<<"Overflow";
        }
    }
    
    void deleteMiddle(){
       if(count == (size/2)){
            --top;
            return;
       }
       int temp = arr[top];
       top--;
       count++;
       deleteMiddle();
       push(temp);
    }
    void dislay(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};




int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.deleteMiddle();
    s.dislay();

}