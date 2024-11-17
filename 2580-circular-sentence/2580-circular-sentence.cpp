class Solution {
public:
    bool isCircularSentence(string sentence) {
        string fw,sw;
        int right=0;
        char b=sentence[0],lc,fc;
        while(right<sentence.size()){
            while(right<sentence.size() && sentence[right]!=' '){
                sw+=sentence[right];
                right+=1;
            }
            right+=1;
            lc=sw[sw.size()-1];
            if(right<sentence.size()) fc=sentence[right];
            if(right<sentence.size() && lc!=fc) return false;
        }
        if(lc!=b) return false;
        return true;
    }
};