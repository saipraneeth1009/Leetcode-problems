class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size()==k) return "0";
        vector<char> check;
        for(int i=0;i<num.size();i++){
            while(!check.empty() && k >0 && check.back()>num[i]){
                check.pop_back();
                k-=1;
            }
            check.push_back(num[i]);
        }
        while(k-- > 0){
            check.pop_back();
        }

        string ans;
        
        for(char i:check){
            if(i=='0' && ans.empty()) continue;
            ans+=i;
        }
        if(ans.empty()) return "0";
        return ans;
    }
};