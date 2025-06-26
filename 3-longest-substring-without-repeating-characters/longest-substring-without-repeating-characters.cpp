class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int max_len=0;
       set<int> st;
       int i=0, j=0;
       while(i<s.size()){
        if(!st.count(s[i])){
            st.insert(s[i]);
            max_len=max(max_len,(int) st.size());
            i++;
        }
        else{
            st.erase(s[j]);
            j++;
        }
       }

       return max_len;
        
    }
};