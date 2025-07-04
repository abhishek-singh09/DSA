class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]> arr[mid-1] && mid+1<arr.size() && mid-1>=0){
                return mid;
            }else if(arr[mid]<arr[mid+1]){
             l=mid+1;   
            }else{
                h=mid;
            }
        }
        return -1;
        
    }
};