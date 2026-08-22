class Solution {
    public boolean checkDivisibility(int n) {
        long sum=0;
        long prod =1;
        long num=n;

        while(num>0){
        prod= prod * (num%10);
        sum= sum + (num%10);
        num =num/10;
        }
        long whole_sum=prod + sum;

        if(n%whole_sum==0){
            return true;
        }
        else{
            return false;
        } 
    }
}