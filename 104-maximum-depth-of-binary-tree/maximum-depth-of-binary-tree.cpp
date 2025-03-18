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
    int maxDepth(TreeNode* root) {
        int res=height(root);
        return res;   
    }

    int height(TreeNode* node){
        if(node==NULL) return 0;

        int lh= height(node->left);
        int rh= height(node->right);
        int ans=max(lh,rh)+1;
        return ans;
    }
};