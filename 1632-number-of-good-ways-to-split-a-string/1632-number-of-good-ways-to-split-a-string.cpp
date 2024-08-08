class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int> total;
        for(int i=0;i<s.size();i++){
            total[s[i]]+=1;
        }
        unordered_map<char,int> cur;
        int ans=0;
        for(int i=0;i<s.size();i++){
            cur[s[i]]+=1;
            total[s[i]]-=1;

            if(total[s[i]]==0) total.erase(s[i]);

            if(cur.size()==total.size()) ans+=1;
        }
        return ans;
    }
};