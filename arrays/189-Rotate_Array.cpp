/* this took me a while to learn
std::rotate(start,middle,end) this roates the array like (start->middle) go in the 2nd part and (middle+1->end) come to first
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::rotate(nums.begin(),
                    nums.end() - (k % nums.size()), nums.end());
    }
};
