class Solution {
public:
    string largestGoodInteger(string num) {

        string a="";
        
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&& num[i]==num[i+2]){
                string s= num.substr(i,3);
                a=max(a, s);
            }
        }
        return a;
    }
};