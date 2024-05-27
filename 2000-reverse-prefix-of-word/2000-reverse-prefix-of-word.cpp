class Solution {
public:
    string reversePrefix(string s, char ch) {
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]==ch) break;
        }
        if(i>=s.length()) return s;
        int left=0,right=i;
        while(left<=right){
            swap(s[left],s[right]);
            left+=1;
            right-=1;
}
        return s;
    }
};