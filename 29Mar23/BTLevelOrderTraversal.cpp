//https://leetcode.com/problems/binary-tree-level-order-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int> > ans;
        
        if(root == NULL)
            return ans;
        
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        vector<int> temp;
        temp.push_back(root->val);
        ans.push_back(temp);
        
        temp.resize(0);
        
        while(!q.empty()){
            
            TreeNode* t = q.front();
            q.pop();
            
            if(t == NULL){
                
                if(temp.size() > 0)
                    ans.push_back(temp);
                temp.resize(0);
                
                if (q.size() > 0) {
                    q.push(NULL);
                }
            }
            else {
                if(t->left != NULL){
                    temp.push_back(t->left->val);
                    q.push(t->left);
                }
                if(t->right != NULL){
                    temp.push_back(t->right->val);
                    q.push(t->right);
                }
            }
        }
        return ans;
    }
};