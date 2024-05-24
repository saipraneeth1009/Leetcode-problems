class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //sort(bills.begin(),bills.end());
        if(bills[0]==10 || bills[0]==20) return false;
        int five=0,ten=0,twenty=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) five+=1;
            else if(bills[i]==10){
                ten+=1;
                if(five==0) return false;
                five-=1;
            }
            else{
                twenty+=1;
                if(ten>=1 && five>=1){
                    ten-=1;
                    five-=1;
                }
                else if(five>=3) five-=3;
                else return false;
            }
        }return true;
    }
};