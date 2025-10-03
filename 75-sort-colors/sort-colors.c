void sortColors(int* nums, int n) {
    int i=0;
    int j=n-1;
    int k=0;
      void swap(int *a, int *b){
        int temp = *a;
        *a=*b;
        *b=temp;
    }
    while(k<=j){
        if(nums[k]==0){
            swap(&nums[k],&nums[i]);
            i++;
            k++;
        }
       else if(nums[k]==2){
            swap(&nums[k],&nums[j]);
            j--;
        }
      else{
        k++;
      }
    }
  
}