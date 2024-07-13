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
        // recursivaly call
// bool searchKey(Node* root,int key){
//     if(root == nullptr){
//         return false;
//     }
//     if(key == root->data){
//         return true;
//     }
//     if(key < root->data){
//        searchKey(root->left,key);
//     }
//     else{
//         searchKey(root->right,key);
//     }

// }

        // iterative call for searching 
Node* searchingInBST(Node* root,int key){
    Node* temp = root;
    if(temp == nullptr) return nullptr;

    if(key < temp->data){
        while (temp->left != nullptr)
        {
            
        }
        
    }
}

Node* findMinInBST(Node* root){
    if(root == nullptr) return nullptr;
    Node* temp = root;
    while (temp->left != nullptr)
    {
        temp = temp->left;
    }
    return temp;
    
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
    cout<<endl;
    // cout<<searchKey(root,9);
    Node* temp = findMinInBST(root);
    cout<<temp->data;

}