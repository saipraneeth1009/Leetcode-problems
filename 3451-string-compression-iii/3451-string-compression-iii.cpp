class Solution {
public:
    string compressedString(string word) {
        string comp;
        int right=0,count=0;
        while(right<word.size()){
            char p=word[right];
            count=0;
            while(right<word.size() && word[right]==p && count<9){
                right+=1;
                count+=1;
            }
            comp+=(count+'0');
            comp+=p;
        }
        return comp;
    }
};