class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> check;

        unordered_set<char> rem;
        for(int i=0;i<s.size();i++){
            if(check.find(s[i])==check.end()){
                if(rem.find(t[i])!=rem.end()) return false;
                check[s[i]]=t[i];
                rem.insert(t[i]);
                
            }
            else{
                if(check[s[i]]!=t[i]) return false;
            }
        }
        return true;
    }
};