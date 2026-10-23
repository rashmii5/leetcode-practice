class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>(n/2)){
                return nums[i];
            }
        }
        return nums[0];

        
        
    }
};
// optimal solution Boyer Moore Voting Algorithm(something new today!)
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int candidate,count=0;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            candidate=nums[i];
        }
        if(nums[i]==candidate){
            count++;
        }
        else{
            count--;
        }

        }
        return candidate;
    
        
    }
};
*/
