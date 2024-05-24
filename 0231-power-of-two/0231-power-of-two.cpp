class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        long long temp=n;
        if((temp&(temp-1))==0) return true;
        return false;
    }
    
};