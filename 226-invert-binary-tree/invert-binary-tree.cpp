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
    void check(TreeNode* r){
        if(r==NULL) return;
        if(r->left!=nullptr || r->right!=nullptr){
            TreeNode* t= r->right;
            r->right=r->left;
            r->left=t;
        }
        check(r->left);
        check(r->right);
        
        
    }

    TreeNode* invertTree(TreeNode* root) {
        check(root);
        return root;
        
    }
};