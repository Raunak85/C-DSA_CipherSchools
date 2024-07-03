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
    Node* newNode = new Node(val);
    if(head == nullptr){

        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
    {

        temp  = temp->next;
    }

    temp->next = newNode;
    
}

void display(Node* head){
    Node* temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    
}

// two pointer approach to find mid; // second method

Node* findMiddle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
    
}
 // first method
void deleteMiddle(Node* &head){
    Node* temp = head;
    int count = 1;
    while (temp->next != nullptr)
    {
        count++;
        temp = temp->next;
    }
    int mid = (count/2);
    int i=0;
    temp = head;
    while (i != mid)
    {
        temp = temp->next;
        i++;
    }
    cout<<temp->data;
    

}
int main(){
    
    Node* head = nullptr;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    // insertNode(head,5);
    // display(head);
    Node* middle = findMiddle(head);
    cout<<middle->data;
    // deleteMiddle(head);
}