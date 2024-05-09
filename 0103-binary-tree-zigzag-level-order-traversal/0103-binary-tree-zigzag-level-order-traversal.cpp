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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        queue<TreeNode*> check;
        vector<vector<int>> ans;
        vector<int> temp;
        int n;
        check.push(root);
        while(!check.empty()){
            n=check.size();
            temp={};
            for(int i=0;i<n;i++){
                TreeNode * top=check.front();
                temp.push_back(top->val);
                    if(top->left!=nullptr) check.push(top->left);
                    if(top->right!=nullptr) check.push(top->right);
                check.pop();
            }
            ans.push_back(temp);
        }
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};