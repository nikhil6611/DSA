class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i=0;
        int firstOne, secondOne;
        while(i<nums.size()){
            if(nums[i]==1){
                firstOne=i;
                i++;
                break;
            }
            i++;
        }
        while(i<nums.size()){
            if(nums[i]==1){
                secondOne=i;
                if(secondOne-firstOne-1 < k){
                    return false;
                }
                firstOne = secondOne;

            }
            i++;
        }
        return true;
    }
};