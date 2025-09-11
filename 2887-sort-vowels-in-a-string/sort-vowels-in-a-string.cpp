class Solution {
public:
    string sortVowels(string s) {

        vector<char> arr;



        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                arr.push_back(s[i]);
            }
        }

        int j=0;
        if(arr.size()>=2){
            sort(arr.begin(),arr.end());
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=arr[j];
                j++;
            }
        }


        return s;
        
    }
};