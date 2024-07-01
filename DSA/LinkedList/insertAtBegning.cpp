#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtbegning(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next = head;
    head = newNode;
}

bool search(Node* head,int key){
    Node* temp=head;
    bool flag = false;
    while (head->next != NULL)
    {
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
    
}

void display(Node* head){
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

int main(){
    Node* head = NULL;
    insertAtbegning(head,1);
    insertAtbegning(head,2);
    insertAtbegning(head,3);
    insertAtbegning(head,3);
    if(search(head,2)){
        cout<<"2 is present in linked list"<<endl;
    }
    else{
        cout<<"2 is not present in linked list"<<endl;
    }
    display(head);
}