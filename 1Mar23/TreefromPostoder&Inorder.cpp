//https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
int pos(int in[], int start , int end , int key){
    for(int i=start; i<=end;i++){
        if(in[i] == key)
            return i;
    }
    return -1;
}
     
     
Node* solve(int in[], int post[], int &index, int instart,int inend,int n){
    
    if(instart > inend || index < 0)
        return NULL;
            
    int element = post[index--];
        
    int position = pos(in,instart,inend,element);
        
    Node* root= new Node(element);
    root->right = solve(in, post, index, position+1, inend, n);
    root->left = solve(in, post, index, instart, position-1, n);
        
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    int postorderIndex = n-1;
     
    Node* ans= solve(in, post, postorderIndex, 0, n-1, n);
    
    return ans;
}