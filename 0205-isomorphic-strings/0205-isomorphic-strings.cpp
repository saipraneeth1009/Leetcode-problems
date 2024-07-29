class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> ls(256,0);
        vector<int> ts(256,0);

        for(int i=0;i<s.size();i++){
            if(ls[s[i]]!=ts[t[i]]) return false;

            ls[s[i]]=i+1;
            ts[t[i]]=i+1;
        }

        return true;
    }
};