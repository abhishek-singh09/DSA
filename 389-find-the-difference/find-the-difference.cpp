class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(), t.end()); 
        char c=' '; 
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                c=t[i];
                break;
            }
        }
        if(c==' '){
            return t[t.size()-1];
        }
        return c;
    }
};