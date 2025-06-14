class Solution {
public:
    int minMaxDifference(int num) {

        string s= to_string(num);
        string a=s;
        string b=s;
        char s_first='\0';
        for(int i=0;i<s.size();i++){
            if(s[i]!='9'){
                s_first=s[i];
                break;
            }
        }
        for(int i=0;i<s.size();i++){
            if(a[i] == s_first){
                a[i]='9';
            }
        }

        char s_second='\0';
        for(int i=0;i<s.size();i++){
            if(b[i]!=0){
                s_second=b[i];
                break;
            }
        }

        for(int i=0;i<s.size();i++){
            if(b[i]==s_second){
                b[i]='0';
            }
        }

        int d=stoi(a);
        int e=stoi(b);
        int ans= abs(e-d);

        return ans;
        
    }
};