class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0 , j=height.size()-1;
        int maxstored = 0;
        
        while(i<j){
            int width = j-i;
            int ht = min(height[i], height[j]);
            int currstored = width*ht;
            maxstored = max(maxstored, currstored);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        
            
            

        }
        return maxstored;
    }
};