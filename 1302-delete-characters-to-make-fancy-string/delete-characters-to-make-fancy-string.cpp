class Solution {
public:
    string makeFancyString(string s) {
        string a="";
        int count=1;
        a+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                count++;
            }else{
                count =1;
            }
            if (count < 3) {
                a+= s[i];
            }
        }

        return a;
    }
};