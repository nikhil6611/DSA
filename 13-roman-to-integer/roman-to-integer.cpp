class Solution {
public:
    int map(char c){
    
        switch (c){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C': return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
        }
        return 0;
        
    }
    int romanToInt(string s) {
        int ans=0;
        int i;
        for( i=0;i<s.size()-1;i++){
            int x = map(s[i]);
            int y = map(s[i+1]);
            if(x<y){
                x = -x;
            }
            ans+=x;
        }
        int x = map(s[i]);
        ans+=x;
        return ans;
    }
};