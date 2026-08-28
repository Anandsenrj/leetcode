class Solution {
    public int longestSubsequence(int[] nums) {
        int n=nums.length;
        int resultXor=0;
        boolean allzeros=true;

        for(int x:nums){
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
}