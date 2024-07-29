class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size()!=s.size()) return false;
        string temp,rem;

        for(int i=0;i<s.size();i++){
            temp=s.substr(0,i+1);
            rem=s.substr(i+1,s.size()-i+1);
            if(goal == (rem+temp)) return true;
        }
        return false;

    }
};