class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)) return false;
        if(x==0) return true;
        // int dup=x;
        int rev=0;
        while(x>rev){
        int ld=x%10;
        x=x/10;
        rev=(rev*10) +ld;
        // if(rev==dup){
        //     return true;
        // }
        
    }
    return x == rev || x == rev / 10;;
    }
};


