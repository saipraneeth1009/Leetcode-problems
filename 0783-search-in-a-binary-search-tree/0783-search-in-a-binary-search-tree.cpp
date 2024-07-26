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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr) return nullptr;


        if(val < root->val) {
            TreeNode* lft=searchBST(root->left,val);
            return lft;
        }
        
        else if(val>root->val) {
           TreeNode* rgt=searchBST(root->right,val);
           return rgt;
        }

        return root;

    }
};