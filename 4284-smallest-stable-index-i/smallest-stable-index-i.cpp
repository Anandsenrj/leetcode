class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int> minfromidx(n);
        int minel=INT_MAX;    
        for(int i=n-1;i>=0;i--){
            minel=min(minel,nums[i]);
            minfromidx[i]=minel;
        }
        int maxel=INT_MIN;
        for(int i = 0 ; i< n ;i++){
            maxel =max(maxel,nums[i]);

            if(maxel-minfromidx[i]<=k )
                return i;
        }
        return -1;
    }
};