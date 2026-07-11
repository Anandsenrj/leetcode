// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
      
//       int currSum =0,maxSum = INT_MIN;

//         for(int val : nums){
//             currSum += val;
//             maxSum = max(currSum,maxSum);

//             if(currSum < 0){
//                 currSum =0;
//             }
//         }
//   return maxSum;  }
// };



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
    int CurrentSum=0,Max_Sum=INT_MIN;
    
    for(int i =0;i<nums.size();i++){
        CurrentSum=CurrentSum + nums[i];
        Max_Sum = max(CurrentSum,Max_Sum);

        if(CurrentSum<0){
            CurrentSum=0;
        }
    }
    return Max_Sum;
        }
};