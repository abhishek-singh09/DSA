class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

        int size= s.size();
        vector<string> str;
        
        for(int i=0;i<size;i=i+k){
           string a="";
            for(int j=i;j<i+k;j++){
                if(j>size-1){
                    a=a+fill;
                }else{
                    a= a+s[j];
                }
            }
            str.push_back(a);
        }
        return str;  
    }
};