//https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    int ans(TreeNode* root, int& k, int& num){
        if(root == NULL){
            return num;
        }
        ans(root->left, k, num);
        k--;
        if(k == 0){
            num = root->val;
            return num;
        }
        ans(root->right, k, num);
        return num;
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int num = 0;
        return ans(root, k, num);
    }
};