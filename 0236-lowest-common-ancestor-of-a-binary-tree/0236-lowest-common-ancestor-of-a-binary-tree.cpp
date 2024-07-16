/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr || root==p || root==q){
            return root;
        }
        TreeNode* lft=lowestCommonAncestor(root->left,p,q);
        TreeNode* rgt=lowestCommonAncestor(root->right,p,q);

        if(lft==nullptr) return rgt;
        else if(rgt==nullptr) return lft;
        else{
            return root;
        }
    }
};