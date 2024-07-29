class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> check;
        //check.push(s[0]);
        int  start=0;
        string ans="",temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') check.push(s[i]);
            else{
                check.pop();
            }

            if(check.empty()){
                temp=s.substr(start,i+1-start);
                start=i+1;
                //cout<<temp<<endl;
                temp.erase(0,1);
                temp.erase(temp.size()-1,1);
                ans+=temp;
                temp="";
            }
        }
        return ans;
    }
};