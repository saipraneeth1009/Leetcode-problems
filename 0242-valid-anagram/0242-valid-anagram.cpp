class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cs(26,0);
        vector<int> ct(26,0);

        for(int i=0;i<s.size();i++){
            cs[s[i]-'a']+=1;
        }

        for(int i=0;i<t.size();i++){
            ct[t[i]-'a']+=1;
        }

        for(int i=0;i<26;i++){
            if(cs[i]!=ct[i]) return false;
        }
        return true;
    }
};