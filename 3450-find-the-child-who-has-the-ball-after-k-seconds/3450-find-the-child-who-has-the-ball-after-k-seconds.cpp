class Solution {
public:
    int numberOfChild(int n, int k) {
        int person=-1;
        int start=0;
        bool flag=true;
        while(start<=k){
            if(flag){
            person+=1;
            }
            else{
                person-=1;
            }
            start+=1;
            if(person==n-1) flag=false;
            else if(person==0) flag=true;
        }
        return person;
    }
};