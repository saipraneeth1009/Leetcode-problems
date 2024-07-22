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
    bool check(TreeNode* lft,TreeNode* rgt){
        if(lft==nullptr && rgt!=nullptr) return false;
        if(lft!=nullptr && rgt==nullptr) return false;
        if(lft==nullptr && rgt==nullptr) return true;
        
        if(lft->val != rgt->val) return false;

        if(!check(lft->left,rgt->right)) return false;

        if(!check(lft->right,rgt->left)) return false;

        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;

        return check(root->left,root->right);
    }
};