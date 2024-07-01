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

bool search(Node* head,int key){
    Node* temp=head;
    bool flag = false;
    while (head->next != NULL)
    {
        if(head->data == key){
            
            return true;
        }
        head = head->next ;
    }
    return false;

}

void display(Node* head){
    while(head != NULL){
       
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node* head = NULL;
    insertAtTail(head,3);
    insertAtTail(head,5);
    insertAtTail(head,8);
    // display(head);
    bool flag = search(head,5);
    if(flag){
        cout<<"present";
    }else{
        cout<<"not";
    }
}