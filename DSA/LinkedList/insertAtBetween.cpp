#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
    }
};
void insertAtBetween(Node* &head,int val){
    Node* newNode=new Node(val);
    int count=1;

    Node* temp=head;
    while (temp != NULL)
    {
        if(count == 2){
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        count++;
        temp = temp->next;
    }
    
}
void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    
    newNode->next = head;
    
    head = newNode;
    // cout<<"1";
}

void display(Node* head){
    
    while (head != NULL)
    {
        
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
    
}

int main(){
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);

    display(head);
    insertAtBetween(head,7);
    display(head);
}