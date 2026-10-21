// yayy my solution workedddd and it was the optimal one hehe
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(i==nums.size()-1){
                     maximum= max(maximum,count);
                }
                
            }
            else if(nums[i]==0){
                maximum = max(maximum,count);
                count=0;
            }
             
            
        }
        return maximum;
        

        
    }
};
