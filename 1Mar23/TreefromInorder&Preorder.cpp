//https://practice.geeksforgeeks.org/problems/construct-tree-1/1

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int pos(int in[], int start , int end , int key){
            for(int i=start; i<=end;i++)
                if(in[i] == key)
                    return i;
                    
            return -1;
        }
     
     
     Node* solve(int in[], int pre[], int &index, int instart,int inend,int n)
     {
         if(instart > inend || index >=n)
            return NULL;
            
        int element = pre[index];
        index++;
        
        int position = pos(in,instart,inend,element);
        
        Node* root= new Node(element);
        root->left = solve(in,pre,index,instart,position-1,n);
        root->right = solve(in,pre,index,position+1,inend,n);
        
        return root;
     }
     
        
     
     
    Node* buildTree(int in[],int pre[], int n)
    {
     int preorderIndex=0;
     
     Node* ans= solve(in,pre,preorderIndex,0,n-1,n);
     return ans;
    }
};