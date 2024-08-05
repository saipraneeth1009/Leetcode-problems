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
    void vt(TreeNode* root,int dist,int level,map<int,vector<pair<int,int>>> &check){
        if(root==nullptr) return;

        if(check.find(dist)==check.end()) check[dist]={{level,root->val}};
        else check[dist].push_back({level,root->val});

        vt(root->left,dist-1,level+1,check);
        vt(root->right,dist+1,level+1,check);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> check;
        vt(root,0,0,check);

        vector<vector<int>> ans;
        for(auto it:check){
            vector<pair<int,int>> temp=it.second;
            sort(temp.begin(),temp.end());
            vector<int> dummy={};
            for(int i=0;i<temp.size();i++){
                dummy.push_back(temp[i].second);
            }
            ans.push_back(dummy);
        }
        return ans;
    }
};