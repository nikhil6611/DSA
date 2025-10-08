int maxProfit(int* a, int n) {
    int min=0;
    int diff=0;
    int maxdiff=0;
    for(int i =0;i<n;i++){
  diff = a[i]-a[min];
  if(diff> maxdiff){
    maxdiff =diff;
  }
  if(a[i]<a[min]){
    min = i;
  }
    }
    return maxdiff;
}