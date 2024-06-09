class Solution {
public:
    void maxCount(string s,vector<string> &ans,int i,int &maxi){
        if(i==s.size()){
            int count=ans.size();
            maxi=max(maxi,count);
            return;
        }
        string dummy="";
        for(int j=i;j<s.size();j++){
            dummy+=s[j];
            if(find(ans.begin(),ans.end(),dummy)==ans.end()){
                ans.push_back(dummy);
                maxCount(s,ans,j+1,maxi);
                ans.pop_back();
            }
        }
    }
    int maxUniqueSplit(string s) {
        int maxi=INT_MIN;
        vector<string> ans;
        maxCount(s,ans,0,maxi);
        return maxi;
    }
};