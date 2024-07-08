//Convert Array to LinkedList 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertNode(Node* &head,int val){
    Node* newNode=new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void display(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = nullptr;
    int arr[] = {1,2,3,1,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        insertNode(head,arr[i]);
    }
    cout<<endl;
    display(head);
}