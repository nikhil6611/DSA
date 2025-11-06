class Solution {
public:
    double myPow(double x, int n) {
        long long expo =n;
        if(x==0.0){
            return 0;
        }
        if(expo<0){
            x=1/x;
           expo=-expo;
        }
        double ans =1;
        while(expo>0){
          if(expo%2==1){
            ans = ans * x;
          }
          x= x*x;
          expo=expo/2;
        }
        return ans;
        
    }
};