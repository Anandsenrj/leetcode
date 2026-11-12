class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        // int inc=1;
        // int dec=1;

        for(int i=0;i<n;i++){
            int inc=1;
            int j=i+1;

            while(j<n && nums[j]>nums[j-1]){
                inc++;
                j++;
            }
            j=i+1;
            int dec=1;
            while(j<n && nums[j]<nums[j-1]){
                dec++;
                j++;
            }
            result =max({result,inc,dec});
        }
        return result;
    }
};