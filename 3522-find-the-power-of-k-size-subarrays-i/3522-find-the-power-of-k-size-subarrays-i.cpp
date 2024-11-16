class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> check;
        int cur=0;
        int right=0;

        while(right<nums.size()){

            while(cur<k){
            if(!check.empty() && check.back()+1 != nums[right]){
                check.clear();
            }
            check.push_back(nums[right]);
            cur+=1;
            right+=1;
            }
            if(check.size()!=k) ans.push_back(-1);
            else ans.push_back(check.back());

            if(!check.empty() && check.size()==k) check.pop_front();
            cur-=1;

        }
        return ans;
    }
};