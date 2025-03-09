class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();
        int count=0;
        int res=0;
        for(int i=1;i<n+k;i++){
            if(colors[(i-1)%n]!=colors[i%n]){
                count++;
            }else{
                count=1;
            }if(count>=k){
                res++;
            }
        }
        return res;
    }
};