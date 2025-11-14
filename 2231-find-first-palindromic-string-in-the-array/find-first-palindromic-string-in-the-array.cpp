class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++){
            string s= words[i];
            int start=0, end= s.size()-1;
           bool isPalindrome = 1;
            while(start<end){
                if(s[start]!=s[end]){
                    isPalindrome =0;
                  break;
                }
                else{
                    start++;
                    end --;
                    
                }
                
            }
            if(isPalindrome){
                return s;
               
            }
        }
        return """";
    }
};