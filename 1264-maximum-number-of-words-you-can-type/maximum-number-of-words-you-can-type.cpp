class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        int n=1;
        for(int i=0;i<text.size();i++){
            n=1;
            for(int j=0;j<brokenLetters.size();j++){
                if(text[i]==brokenLetters[j]){
                    n=0;
                }
            }
            if(text[i]==' ' && n==1){
                count++;
            }else if(n==0){
                while(i<text.size() && text[i]!=' '){
                    i++;
                }
            }
        }
        if(n==1) count++;
        return count;
        
    }
};