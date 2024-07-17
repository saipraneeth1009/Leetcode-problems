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
    TreeNode* check(TreeNode* root,unordered_set<int>& del,vector<TreeNode*>& ans){
        if(root==nullptr) return nullptr;
 
        root->left=check(root->left,del,ans);
        root->right=check(root->right,del,ans);

        if(del.find(root->val)!=del.end()){
            if(root->left) ans.push_back(root->left);
            if(root->right) ans.push_back(root->right);
            return nullptr;
        }

        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> del;
        for(auto node:to_delete){
            del.insert(node);
        }
        vector<TreeNode*> ans;
        TreeNode* modified=check(root,del,ans);
        if(modified) ans.push_back(modified);
        return ans;
    }
};