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

void LoopCreating(Node* &head){
    Node* temp = head;
    Node* someWhere = head;
 
    while (temp->next != nullptr)
    {
       
        temp = temp->next;
    }
    someWhere = head->next;
    temp->next = someWhere;
    
}

// find is circular or not 

Node* floydDetectionLoop(Node* &head){
    if(head == nullptr) return nullptr;
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && slow != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return slow;
        }
    }
    return nullptr;
    
}

// starting point where loop starting

Node* getStartingNode(Node* head){
    if(head == nullptr) return nullptr;
    Node* intersect = floydDetectionLoop(head);
    Node* slow = head;
    while (slow != intersect)
    {
        slow = slow->next;
        intersect = intersect->next;
    }
    return intersect;
    

}

// make linkedlist loop in single linkedList

void removeLoop(Node* head){
    if(head == nullptr) return;
    Node* startingNode = getStartingNode(head);
    Node* temp = startingNode;
    while (temp->next != startingNode)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
    
}

void display(Node* head){
    Node* temp = head;
    cout<<"Data of LinkedList "<<endl;
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    
}

int main(){
    
    Node* head = nullptr;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    LoopCreating(head);
    Node* insertsection = floydDetectionLoop(head);
    // display(head);
    cout<<"find linkedlist loop or not and return where slow or fast is equal =  "<<insertsection->data<<endl;
    Node* startingPoint = getStartingNode(head);
    cout<<"starting point where loop start = "<<startingPoint->data<<endl;
    removeLoop(head);
    cout<<"After breaking loop linked list is"<<endl;
    display(head);

}