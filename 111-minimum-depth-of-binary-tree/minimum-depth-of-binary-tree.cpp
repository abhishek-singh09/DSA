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
    int minDepth(TreeNode* root) {
        int res= height(root);
        return res;
    }

    int height( TreeNode* node){
        if(node==NULL) return 0;

        int lh= height(node->left);
        int rh= height(node->right);

        if(lh==0){
            return rh+1;
        }else if( rh==0){
            return lh+1;
        }

        return min(lh+1, rh+1);
        
    }
};