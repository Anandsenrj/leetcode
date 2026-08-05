class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int vectorsum =0;
        int sum = (n*(n+1))/2;

        for(int i =0;i<nums.size();i++){
            vectorsum=vectorsum+nums[i];
        }
        // if (vectorsum==sum){
        //     return -1;
        // }
        // else{
        //     return sum-vectorsum;
        // }
        return sum-vectorsum;
    }
};