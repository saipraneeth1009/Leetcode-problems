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
    void check(TreeNode* root,int sum,int &ans){
        if(root==nullptr) return;
        if(!root->left && !root->right){
            ans+=((sum*10)+(root->val));
            return;
        }

        sum=(sum*10)+(root->val);
        check(root->left,sum,ans);
        check(root->right,sum,ans);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0,ans=0;
        check(root,sum,ans);
        return ans;
    }
};