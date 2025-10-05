int longestAlternatingSubarray(int* nums, int n, int threshold) {
    int maxlength = 0;
    int currlength = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > threshold) {   
            currlength = 0;
            continue;
        }

        if (currlength == 0) {
            
            if (nums[i] % 2 == 0) currlength = 1;
        } 
        else {
            
            if ((nums[i] % 2) != (nums[i - 1] % 2))
                currlength++;
            else {
               
                currlength = (nums[i] % 2 == 0) ? 1 : 0;
            }
        }

        if (currlength > maxlength)
            maxlength = currlength;
    }

    return maxlength;
}
