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
    TreeNode* LCA(TreeNode* root,int p,int q){
        if(root==nullptr || root->val ==p || root->val==q){
            return root;
        }
        TreeNode* lft=LCA(root->left,p,q);
        TreeNode* rgt=LCA(root->right,p,q);

        if(lft==nullptr){
            return rgt;
        }
        else if(rgt==nullptr){
            return lft;
        }
        else{
            return root;
        }
    }
    bool check1(TreeNode* root,int startValue,string &ans1){
        if(root==nullptr) return false;
       
        if(root->val==startValue) return true;
        if(check1(root->left,startValue,ans1)){
            ans1+='U';
            return true;
        }
        if(check1(root->right,startValue,ans1)){
            ans1+='U';
            return true;
        }
        return false;
    }

    bool check2(TreeNode* root,int destValue,string &ans2){
        if(root==nullptr) return false;
       
        if(root->val==destValue) return true;
        if(check2(root->left,destValue,ans2)){
            ans2+='L';
            return true;
        }
        if(check2(root->right,destValue,ans2)){
            ans2+='R';
            return true;
        }
        return false;
    }


    string getDirections(TreeNode* root, int startValue, int destValue) {
        string ans1="",ans2="";
        TreeNode* lca=LCA(root,startValue,destValue);
        check1(lca,startValue,ans1);
        check2(lca,destValue,ans2);
        reverse(ans2.begin(),ans2.end());
        return (ans1+ans2);
    }
};