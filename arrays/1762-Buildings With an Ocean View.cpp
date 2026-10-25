
class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> ans;
        int maxHeight = -1;

        for (int i = heights.size() - 1; i >= 0; i--) {
            if (heights[i] > maxHeight) {
                ans.push_back(i);
                maxHeight = heights[i];
            }
        }


      
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
