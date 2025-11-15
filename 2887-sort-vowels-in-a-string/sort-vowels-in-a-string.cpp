class Solution {
public:
    string sortVowels(string s) {
        int count[128]={0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||
                s[i]=='I'||s[i]=='O'||s[i]=='U'){
                    count[s[i]]++;
                    s[i]='#';
                }
        }
        string ans ;
        for(char c='A';c<'z';c++){
            while(count[c]){
                ans+=c;
                count[c]--;
            }
        }
        int second =0, first=0;
        while(second<ans.size()){
            if(s[first]=='#'){
                s[first]=ans[second];
                second++;
            }
            first++;
        }
        return s;
    }
};