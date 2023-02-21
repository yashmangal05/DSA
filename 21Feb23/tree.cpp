#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        node* left;
        node* right;
        int data;

        node(int data){
            this->left = NULL;
            this->right = NULL;
            this->data = data;
        }
};

node* buildTree(node* root){
    cout << "Enter the data: ";
    int data;
    cin >> data;
    cout << endl;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for inserting in the left of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << root->data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

void buildFromLevelOrder(node* &root){
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // root = buildTree(root);

    // cout << "Printing the level order tracersal output " << endl;
    // levelOrderTraversal(root);
}