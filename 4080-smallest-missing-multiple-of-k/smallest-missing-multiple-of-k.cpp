class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> arr(102,0);
        for(int j = 0;j<nums.size();j++){
            if(nums[j]%k==0){
                int which_multiple = nums[j]/k;
                arr[which_multiple]=1;
            }
        }
        int ans =0;
        for(int i=1;i<=101;i++){
            if(arr[i]==0){
                ans=k*i;
                break;
            }
        }
        return ans;
    }
};