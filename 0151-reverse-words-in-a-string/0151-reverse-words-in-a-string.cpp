class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') temp+=s[i];
            else if(s[i]==' ' && temp!=""){
                if(ans!="") ans=temp+" "+ans;
                else ans=temp;
                temp="";
            }
        }
        if(temp!=""){
            if(ans!="") ans=temp+" "+ans;
            else ans=temp;
        }
        return ans;
    }
};