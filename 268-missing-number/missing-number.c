int missingNumber(int* nums, int numsSize) {
    int sum=0, numsum=0;
for(int i=0; i<=numsSize; i++){
    sum= sum +i;;
}
for(int i=0;i<numsSize;i++){
    numsum= numsum + nums[i];
}
return (sum - numsum);
}