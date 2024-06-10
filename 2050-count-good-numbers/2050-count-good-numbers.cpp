class Solution {
public:
    const int MOD=1e9+7;
    long long int power(long long int a,long long int x){
        if(x==0) return 1;
        if(x%2==0) return (power(((a%MOD)*(a%MOD))%MOD,x/2)%MOD);
        else return (a%MOD)*(power(((a%MOD)*(a%MOD))%MOD,x/2)%MOD);
    }
    int countGoodNumbers(long long n) {
       //1 - 1 even
       //2 - 1 even 1 odd
       //3 - 2 even 1 odd
       //4 - 2even 2 odd
       //5 - 3even 2 odd
       long long odd = (n/2);
       long long even= (n)-odd;
       //4^odd * 5^even
       long long int oddtotal = (power(4,odd))%MOD;
       long long int eventotal = (power(5,even))%MOD;
       return (oddtotal*eventotal)%MOD;
    }
};