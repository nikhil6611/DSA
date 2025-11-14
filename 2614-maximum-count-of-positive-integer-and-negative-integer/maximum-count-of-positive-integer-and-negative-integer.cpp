class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0,pos=0;
        // count for negative
        int start= 0, end = nums.size()-1;
        
        while(start<=end){
         int mid = start+(end-start)/2;
         
         if(nums[mid]<0){
            if(mid==nums.size()-1){
                neg = nums.size();
                break;
            }
            if(nums[mid+1]<0){
                start = mid+1;
            }
            else{
              neg = mid-0+1;
              break;
            }
         }
         else{
            end = mid-1;
         }
        }
        //count for positive
        start =0 ,end= nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]>0){
                if(mid==0){
                    pos = nums.size();
                    break;
                }
                if(nums[mid-1]>0){
                    end = mid-1;
                }
                else{
                    pos = nums.size()-mid;
                    break;
                }
            }
            else{
                start =mid+1;

            }
        }
        return max(pos,neg);
    }
};