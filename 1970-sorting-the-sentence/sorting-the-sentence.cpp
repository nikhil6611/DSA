class Solution {
public:
    string sortSentence(string s) {
          vector<string> ans(10);
          string temp, sentence;
          int count =1;
          int i=0;
        while(s[i]!='\0'){
            if(s[i]==' '){
                int pos = temp[temp.size()-1] -'0';
                temp.pop_back();
             ans[pos] = temp;
             temp.clear();
             count++;
            }
            else{
                temp  = temp+s[i];
                
            }
            i++;
        }
         int pos = temp[temp.size()-1] -'0';
                temp.pop_back();
             ans[pos] = temp;
             temp.clear();
             for(int i=1;i<=count;i++){
                  sentence+=ans[i];
                  sentence.push_back(' ');
             }
             sentence.pop_back();
             return sentence;
    }
};