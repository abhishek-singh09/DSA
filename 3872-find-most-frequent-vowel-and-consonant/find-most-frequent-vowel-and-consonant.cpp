class Solution {
public:
    int maxFreqSum(string s) {

        map<char, int>vov;
        map<char,int>con;

        for(char c: s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                vov[c]++;
            }else{
                con[c]++;
            }
        }
        int a=0;
        for(auto& p:vov){
            if(p.second>a){
                a=p.second;
            }
        }
        int b=0;
        for(auto& p:con){
            if(p.second>b){
                b=p.second;
            }
        }

        return a+b;
        
    }
};