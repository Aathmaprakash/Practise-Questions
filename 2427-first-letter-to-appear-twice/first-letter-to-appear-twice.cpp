class Solution {
public:
    char repeatedCharacter(string s) {
        
        int count=0;

        for(int i=0;i<=s.length();i++){
            char c=s[i];

            for(int j=0;j<i;j++){
                if(c==s[j]){
                    return c;
                }
            }
           
        }
        return -1;
    }
};
