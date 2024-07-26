class Solution {
public:
    string reverseWords(string s) {
        stack<char> check;
        string ans;
        bool exec;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                check.push(s[i]);
            }
            else{
                while(!check.empty()){
                    exec=true;
                    auto top=check.top();
                    ans+=top;
                    check.pop();
                }
                if(exec){
                    ans+=" ";
                    exec=!exec;
                } 
            }
        }
        while(!check.empty()){
            auto top=check.top();
            ans+=top;
            check.pop();
        }

        if(ans[ans.size()-1]==' ') ans.erase(ans.size()-1,1);
        return ans;
    }
};