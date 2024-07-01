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

void insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);
     
    if(head == NULL){
    
        head = newNode;
      
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
    
        temp = temp->next;
    }
   
    temp->next = newNode;
    
}

void deleteBetween(Node* &head,int key){
    Node* temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node* deleteElement = temp->next;
    temp->next  = temp->next->next;
    delete deleteElement;
    
}

void display(Node* head){
    while(head != NULL){
       
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    deleteBetween(head,3);
    display(head);
   
}