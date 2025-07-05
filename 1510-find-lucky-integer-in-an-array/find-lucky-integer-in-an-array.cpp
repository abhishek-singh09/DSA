class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> cnt;
        for(int i=0;i<arr.size();i++){
            cnt[arr[i]]++;
        }
        int res=-1;

        for(auto& pair: cnt){
            if(pair.first==pair.second){
                res=max(res, pair.first);

            }
        }
        return res;
    }
};