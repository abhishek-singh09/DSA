class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int h=height.size()-1;
        int mx=INT_MIN;
        while(l<h){
            int mn=min(height[l],height[h]);
            int area= mn*(h-l);

            if(height[l]>height[h]){
                h--;
            }else{
                l++;
            }
            mx=max(mx,area);
        }
        
        return mx;
        
    }
};