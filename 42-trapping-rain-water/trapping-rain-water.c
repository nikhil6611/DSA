int trap(int* arr, int n) {
    int water=0;
    int lmax[n];
    int rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1; i<n;i++){
        lmax[i] = (lmax[i-1]>arr[i])?lmax[i-1]:arr[i];

    }
    for(int i = n-2;i>=0;i--){
        rmax[i]= (rmax[i+1]>arr[i])?rmax[i+1]:arr[i];
    }
    for(int i =0; i<n;i++){
        water += (((lmax[i]<rmax[i])?lmax[i]:rmax[i])-arr[i]); 
    }
    return water;
}