class Solution {
    public int largestInteger(int[] nums, int k) {
        int [] count = new int [51];

        //checking every sub array of size k
        for(int i= 0;i<=nums.length-k;i++){
            boolean[] seen =new boolean[51];
            for(int j =i;j<i+k;j++){
                seen[nums[j]]=true;
            }

            //Counting this subarray only once for each number
            for(int x=0;x<=50;x++){
                if(seen[x]){
                    count[x]++;
                }
            }
        }

        //finding largest number appearing in exactly one sunarray

        for(int x=50;x>=0;x--){
            if(count[x]==1){
                return x;
            }
        }
        return -1;
    }
}