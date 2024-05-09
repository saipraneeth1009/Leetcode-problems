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
    int check(TreeNode* root,int &sum){
        if(root==nullptr) return 0;
        int l=check(root->left,sum);
        int r=check(root->right,sum);
        sum=max(sum,max(max(l+r+root->val,max(l,r)+root->val),root->val));
        return max(max(l,r)+root->val,root->val);
        
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        check(root,sum);
        return sum;
    }
};