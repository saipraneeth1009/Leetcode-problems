class Solution {
public:
    bool palindrome(string s,int i,int j){
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i+=1;
            j-=1;
}
        return true;
}
    void check(string s,vector<vector<string>> &ans,vector<string> &temp,int i){
        if(i==s.length()){
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.length();j++){
            if(palindrome(s,i,j)){
                temp.push_back(s.substr(i,j-i+1));
                check(s,ans,temp,j+1);
                temp.pop_back();
            }
}
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        check(s,ans,temp,0);
        return ans;
    }
};