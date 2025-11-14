class Solution {
public:
    bool checkIfPangram(string sentence) {
        int CHAR[256]={0};
        for(int i =0;i<sentence.size();i++){
            CHAR[sentence[i]]++;
        }
        for(char c='a'; c<='z'; c++){
            if(CHAR[c]==0){
                return false;
            }

        }
        return true;
    }
};