class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int resultXor=0;
        bool allzeros=true;

        for(int &x:nums){
            resultXor=(resultXor ^ x);

            if(x!=0){
                allzeros=false;
            }
        }
        if(allzeros){
            return 0;
        }
        return resultXor==0?n-1:n;
    }
};