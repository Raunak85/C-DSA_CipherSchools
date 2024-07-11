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

void RightView(Node* root){
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    // q.push(nullptr);
    while (!q.empty())
    {
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* temp  = q.front();
            q.pop();
            if(i == n-1){
                cout<<temp->data<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    

}
void leftView(Node* root){
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    // q.push(nullptr);
    while (!q.empty())
    {
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* temp  = q.front();
            q.pop();
            if(i == 0){
                cout<<temp->data<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    

}

int ReplaceRootWithChildData(Node* root){
    if(root == nullptr){
        return 0;
    }
    // int leftSum = ReplaceRootWithChildData(root->left);
    // int rightSum = ReplaceRootWithChildData(root->right);

    // int oldValue= root->data;
    // root->data = leftSum+rightSum;
    // return root->data + oldValue;
    root->data = ReplaceRootWithChildData(root->left) + ReplaceRootWithChildData(root->right) + root->data;
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
    // cout<<countNode(root);
    // ReplaceRootWithChildData(root);
    // preOrder(root);
    // RightView(root);
    leftView(root);
}