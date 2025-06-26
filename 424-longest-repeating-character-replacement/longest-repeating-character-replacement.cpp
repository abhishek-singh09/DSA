class Solution {
public:
    int characterReplacement(string s, int k) {
        int size=s.size();
       
        int max1=0;
        
        int res=0;
        for(char c='A';c<='Z';c++){
            int i=0, j=0;
            int z=0;
            while(j<size){
                if(s[j]!=c){
                    z++;
                } 

                while(z>k){
                    if(s[i]!=c) z--;
                    i++;
                }
                max1=max(max1, j-i+1);
                j++;
            }
            res=max(max1,res);
        }
        return max1;
    }
};