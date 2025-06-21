class Solution {
public:
    int minimumDeletions(string word, int k) {
        map<char, int> ch_count;

        for(char c: word){
            ch_count[c]++;
        }

        vector<int> arr;

        for(auto& temp: ch_count){
            arr.push_back(temp.second);
        }
        sort(arr.begin(), arr.end());


        int mn=INT_MAX;
        for(int i=0;i<arr.size();i++){
            int tar= arr[i];
            int del= 0;
            for(int m: arr){
                if(m<tar){
                    del+=m;
                }else if(m>tar+k){
                    del+=m-(arr[i]+k);
                }
            }
            mn=min(mn,del);
        }
        return mn;
    }

     
    
};