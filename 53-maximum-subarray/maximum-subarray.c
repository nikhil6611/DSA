int maxSubArray(int* nums, int numsSize) {
    int currSum=0;
    int maxSum=nums[0];
    for(int i=0; i<numsSize; i++){
        currSum+=nums[i];
        if(currSum>maxSum){
            maxSum= currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}