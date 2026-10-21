//uses two pointers to keep the non zero elements in the left
/* when we encounter a zero we swap the left and right values and increment left and right so left stay with first 0 and right goes to find the next 
non zero element */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        while(right<nums.size()){
            if(nums[right]==0){
            right++;
            }

        
        else if(nums[right]!=0){
            swap(nums[left],nums[right]);
            left++;
            right++;
        }
        }
        

        

        
    }
};
