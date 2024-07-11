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

Node* BuildBinaryTree(Node* root){
    cout<<"Enter data"<<endl;
    int val;
    cin>>val;
    root = new Node(val);
    if(val == -1){
        return nullptr;
    }
    cout<<"Enter data for inserting the left of "<<val<<endl;
    root->left = BuildBinaryTree(root->left);
    cout<<"Enter data for inserting the right of "<<val<<endl;
    root->right = BuildBinaryTree(root->right);
    return root;

}


int main(){
    Node* root = nullptr;
    root = BuildBinaryTree(root);
}