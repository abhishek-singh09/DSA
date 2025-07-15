#include<cctype>
class Solution {
public:
    bool isValid(string word) {
        bool d,u,l,v,co;
        d=u=l=v=co=false;
        if(word.size()<3) return false;
        for(char c: word){
            if(!isalnum(c)) return false;

            char m=tolower(c);
            if (isalpha(m)) {
                if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u') {
                    v = true;
                } else {
                    co = true;
                }
            }
        }

        return v&&co;
        
    }
};