class Solution {
public:
    double myPow(double x, long n) {
       double ans= 1;

       if(n<0){
        x=1/x;
        n=-n;
       }

       while(n>0){
        if(n%2==1){
            ans=ans*x;
        }
        x=x*x;
        n=n/2;
       }
       return ans;
    }
};
