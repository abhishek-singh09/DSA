class Solution {
public:
    int maximalRectangle(vector<vector<char>>& m) {
        if (m.empty()) return 0;
        
        int n = m[0].size();
        int ans = 0;
        vector<int> res(n, 0);

        for (int i = 0; i < m.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (m[i][j] == '1') {
                    res[j] += 1;
                } else {
                    res[j] = 0;
                }
            }
            ans = max(ans, largestRectangleArea(res));
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        heights.push_back(0); 

        for (int i = 0; i < heights.size(); i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }

        return maxArea;
    }
};
