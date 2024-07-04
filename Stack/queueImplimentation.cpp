#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size = 10;
    int front;
    int rear;

    Queue(){
        arr = new int(size);
        front = -1;
        rear = -1;
    }

    void inqueue(int val){
        
        if(rear == size-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(front == -1){
            front++;
        }
        arr[++rear] = val;
    }
    void dequeue(){
        if(front == -1 || front > rear){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        if(front == rear){
            cout<<"Dequeue element is : "<<arr[front]<<endl;
            front = -1;
            rear = -1;

        }else{
            cout<<"Dequeue element is : "<<arr[front]<<endl;
            ++front;
        }
    }
    void peek(){
        if(front == rear ){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        cout<<"Peek element of queue is : "<<arr[front]<<endl;
    }
};

int main(){
    Queue q;
    q.inqueue(1);
    q.inqueue(2);
    q.inqueue(3);
    q.inqueue(4);
    q.dequeue();
    q.peek();
}