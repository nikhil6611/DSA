/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
   unsigned int x=0;
    for(int i=0;i<numsSize;i++){
        x=x^nums[i];
    }
    unsigned int k = (x&(~(x-1)));
    int diff=0;
    int same=0;
    for(int i=0; i<numsSize; i++){
        if((k&nums[i])!=0){
            diff= diff^nums[i];
        }
        else{
            same= same^nums[i];
        }
    }
   int* ans= (int*)malloc(2*sizeof(int));
   ans[0]=diff;
   ans[1]=same;
   *returnSize=2;
   return ans;
   
}