class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int count=0;

        for(int i=0;i<players.size();i++){
            int m=INT_MAX;
            int idx=-1;
            int l=0;
            int h=trainers.size()-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(players[i]>trainers[mid]){
                    l=mid+1;
                }else if(players[i]<=trainers[mid]){
                    if(trainers[mid]<=m){
                        m=trainers[mid];
                        idx=mid;
                    }
                    h=mid-1;
                }
            }
            if(idx!=-1){
                trainers[idx]=-1;
                count++;
            }
        }
        return count;

       
    }
};