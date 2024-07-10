#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data = val;
        right = nullptr;
        left = nullptr;
    }
};

void preOrder(Node* root){
    if(root == nullptr) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    
}

void inOrder(Node* root){
    if(root == nullptr) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
          Node* node=q.front();
          if(node != nullptr){
            
          }


    }
    
}

int countNode(Node* root){
    if(root == nullptr){
        return 0;
    }
    return countNode(root->left) + countNode(root->right) +1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // preOrder(root);
    // cout<<endl;
    // inOrder(root);
    cout<<countNode(root);
}