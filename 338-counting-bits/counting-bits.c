/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* ans= (int*)malloc((n+1)*sizeof(int));
    *returnSize = n+1;
    for(int i=0; i<=n; i++){
       int count=0;
       int x=i;
        while(x!=0){
            x= (x&(x-1));
            count++;
        }
        ans[i]=count;

    }
    return ans;
    
}