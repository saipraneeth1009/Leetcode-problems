class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        
        long long ans=0;
        
        if(num > 0){
            priority_queue<int,vector<int>,greater <int>> check;
            int count=0;
            while(num>0){
                int temp=num%10;
                if(temp==0) count+=1;
                if(temp!=0) check.push(temp);
                num=num/10;
            }
            ans=check.top();
            check.pop();
            for(int i=0;i<count;i++){
                ans=ans*10;
            }
            while(!check.empty()){
                ans=ans*10+(check.top());
                check.pop();
            }
        }else{
            priority_queue<int> check;
            num=abs(num);
            while(num>0){
                int temp=num%10;
                check.push(temp);
                num=num/10;
            }
            while(!check.empty()){
                ans=ans*10+(check.top());
                check.pop();
            }
            return -(ans);
        }
        return ans;
    }
};