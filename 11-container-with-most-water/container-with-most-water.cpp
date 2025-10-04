class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int h=height.size()-1;
        int res=0;

        while(l<=h){
            res=max(res, (h-l)*min(height[l],height[h]));
            if(height[l]<height[h]){
                l++;
            }else{
                h--;
            }
        }
        return res;        
    }
};