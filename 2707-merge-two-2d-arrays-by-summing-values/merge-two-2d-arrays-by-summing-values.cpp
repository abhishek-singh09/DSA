
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int i = 0, j = 0;
        vector<vector<int>> result;

        while (i < size1 && j < size2) {
            if (nums1[i][0] == nums2[j][0]) { 
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            } 
            else if (nums1[i][0] < nums2[j][0]) { 
                result.push_back(nums1[i]);
                i++;
            } 
            else { 
                result.push_back(nums2[j]);
                j++;
            }
        }

        while (i < size1) {
            result.push_back(nums1[i]);
            i++;
        }

        while (j < size2) {
            result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};