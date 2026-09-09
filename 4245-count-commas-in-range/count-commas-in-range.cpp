class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }
        else {
            return n-999;
        }
    }
};