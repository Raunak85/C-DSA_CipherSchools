#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insertBST(Node* root,int val){
    if(root == nullptr) {
        return new Node(val);
    }

    if(val < root->data){
        root->left = insertBST(root->left,val);
    }
    else{
        root->right = insertBST(root->right,val);
    }
}

void inOrderTrav(Node* root){
    if(root == nullptr) return;
    inOrderTrav(root->left);
    cout<<root->data<<" ";
    inOrderTrav(root->right);
}

int main(){
    Node* root = nullptr;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inOrderTrav(root);

}