//https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    void solve(Node* root, int sum, int &maxSum, int len, int &maxLen){
        if(root == NULL){
            if(len > maxLen){
                maxLen = len;
                maxSum = sum;
            }
            else if(len == maxLen){
                maxSum = max(sum, maxSum);
            }
            return;
        }
        sum += root->data;
        solve(root->left, sum, maxSum, len+1, maxLen);
        solve(root->right, sum, maxSum, len+1, maxLen);
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int length = 0;
        int maxLen = 0;
        
        int sum = 0;
        int maxSum = INT_MIN;
        
        solve(root, sum, maxSum, length, maxLen);
        
        return maxSum;
    }
};