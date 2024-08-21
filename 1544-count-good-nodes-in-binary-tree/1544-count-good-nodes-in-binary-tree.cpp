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
    int check(TreeNode* root,int &count,int maxi){
        if(root==nullptr) return 0;
        int l=check(root->left,count,max(maxi,root->val));
        int r=check(root->right,count,max(maxi,root->val));

        
        if(maxi>root->val) return l+r;
        return l+r+1;
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        int maxi=root->val;
        return check(root,count,maxi);
    }
};