class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
       
           
        
        for(int i=0;i<s.size();i++){
           char c= s[0];
            for(int i=1;i<s.size();i++){
                s[i-1]=s[i];
            }
            s[s.size()-1]=c;
           if(s==goal){
            return true;
           }
        }
        return false;
    }
};