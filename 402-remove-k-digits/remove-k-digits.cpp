class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        if(num.size()==k) return "0";
        for(auto x:num){
            while(ans.size() and ans.back()>x && k){
                k--;
                ans.pop_back();
            }
            if(!ans.size() and x=='0') continue;
            ans+=x;
        }
        while(k and ans.size()) k--, ans.pop_back();
        if(!ans.size()) return "0";
        return ans;
        
    }
};