class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's Algorithm
        int maxSum=INT_MIN, currSum=0;
        for(int value : nums){
            currSum+=value;
            maxSum = max(currSum, maxSum);
            if(currSum <0){
                currSum =0 ;
            }
        }
        return maxSum;
    }
};