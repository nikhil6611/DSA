/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int n, int* returnSize) {
 *returnSize = n;
 int currleader= -1;
 for(int i=n-1; i>=0;i--){
    int temp = arr[i];
    arr[i]= currleader;
    if(temp>currleader){
        currleader = temp;
    }
 }
 return arr;
}