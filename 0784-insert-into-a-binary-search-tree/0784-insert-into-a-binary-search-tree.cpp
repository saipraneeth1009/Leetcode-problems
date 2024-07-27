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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            TreeNode* ans=new TreeNode(val);
            return ans;
        }
        TreeNode* ans=root;
        TreeNode* dest;
        while(root!=nullptr){
            dest=root;
            if(val > root->val){
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        if(val < dest->val){
            dest->left = new TreeNode(val); 
        }
        else{
            dest->right=new TreeNode(val);
        }

        return ans;
    }
};