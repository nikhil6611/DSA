class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        //using for-each loop
        for(int value : nums){
            ans=ans^value;
        }
        return ans;
    }
};