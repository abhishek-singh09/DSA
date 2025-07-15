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
    int check(TreeNode* node, int curr, int tar){
        if(!node) return false;
        curr+=node->val;
        if(!node->left && !node->right){
            return curr==tar;
        }

        return check(node->left, curr, tar) || check(node->right, curr, tar);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return check(root, 0, targetSum);

        
    }
};