/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int n, int* returnSize) {
  int* ans = (int*)malloc(n*sizeof(int));
  *returnSize = n;
  ans[n-1]=-1;
  int currleader=arr[n-1];
  for(int i= n-2;i>=0;i--){
    if(arr[i+1]>currleader){
        currleader= arr[i+1];
       
    }
    ans[i]= currleader;
  }
  return ans;
}