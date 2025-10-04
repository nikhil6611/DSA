int maximumDifference(int* nums, int n) {
    int leader= nums[n-1];
    int maxdiff=-1;
    int currdiff;
    for(int i =n-2;i>=0;i--){
       if(nums[i]<leader){
            currdiff = leader-nums[i];
            maxdiff= (maxdiff<=currdiff)?currdiff:maxdiff;
       }
       else{
        leader = nums[i];
       }
    }
    return maxdiff>=0?maxdiff:-1;
}